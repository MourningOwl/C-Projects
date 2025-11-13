#include "stm32f401xe.h"

void EdgePWMInit (void) {

RCC->APB2ENR |= (RCC_APB2ENR_TIM1EN); // TIM1 Clock set, Checked and valid

TIM1->PSC = 5; // Prescaler, Checked and valid

TIM1->CR1 &= ~(TIM_CR1_DIR); // Checked and valid 

TIM1->CCMR1 &= ~(TIM_CCMR1_CC1S_0);
TIM1->CCMR1 &= ~(TIM_CCMR1_CC1S_1); // Output 1 CCS bits set Checked and valid 

TIM1->CCER &= ~(TIM_CCER_CC1P); // Polarity bit on Channel 1  Checked and valud

TIM1->CCMR1 &= ~(TIM_CCMR1_OC1M_0);
TIM1->CCMR1 |= (TIM_CCMR1_OC1M_1);
TIM1->CCMR1 |= (TIM_CCMR1_OC1M_2); // PWM MODE 1, Channel 1  Checked and valid

TIM1->ARR = 30000; // Resolution Checked and valid 

TIM1->CR1 |= (TIM_CR1_ARPE); // ARPE bit set  Checked and valid 

TIM1->CCMR1 |= (TIM_CCMR1_OC1PE); // Compare register Preload bit set Checked and valid 

TIM1->CR1 &= ~(TIM_CR1_CMS_0);
TIM1->CR1 &= ~(TIM_CR1_CMS_1); // Edge aligned Mode Checked and valid 

TIM1->CCER |= (TIM_CCER_CC1E); // Compare enable Checked and valid 

TIM1->BDTR |= (TIM_BDTR_MOE); // ESSENTIAL, Allows for the signal output on the pin

TIM1->CCR1 = 10000;

TIM1->EGR |= (TIM_EGR_UG);

TIM1->CR1 |= (TIM_CR1_CEN); // Counter enable Checked and valid 

}

void EdgePulse (double pulse) { // Enter a voltage of high precision

	float n = 100;

	TIM1->CCR1 = (int) (pulse * (30000 / n)); // Pulse entered

}


int main() {


RCC->AHB1ENR |= (RCC_AHB1ENR_GPIOAEN); // Port A Clock set 


GPIOA->OTYPER &= ~(GPIO_OTYPER_OT8); // Pin 8 Port A Output push pull 

GPIOA->MODER &= ~(GPIO_MODER_MODER8_0);
GPIOA->MODER |= (GPIO_MODER_MODER8_1); // alternate function mode on pin 8 port A 

GPIOA->AFR[0] &= ~(0 << 1);  // Apparently this is an array lol?
GPIOA->AFR[1] &= ~(0 << 1); 
GPIOA->AFR[2] &= ~(0 << 1); 
GPIOA->AFR[3] &= ~(0 << 1); // Clearing AF selection on Port A Pin 8

GPIOA->AFR[0] |= (0 << 1); // Alternate function 1 on pin 8 Port A 

EdgePWMInit();
EdgePulse(0);


while(1)
{

}

}