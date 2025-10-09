#include <stdio.h>

int main() {

	int digit;
	int branch = 1;

	printf("Please enter your grade: ");

	scanf("%d", &digit);

	if ( (0 > digit) || (digit > 100) ) { 
		printf("Invalid input!");
		return 0;
	}

	switch(digit/10){ //Relies on truncation downwards
		case 10: printf("You got an A!"); branch = 0;
		break; 
		case 9: printf("You got an A!"); branch = 0;
		break;
		case 8: printf("You got an B!"); branch = 0;
		break;
		case 7: printf("You got an C!"); branch = 0;
		break;
		case 6: printf("You got a D!"); branch = 0;

	}

	if (branch) {printf("You got an F!");}

	return 0;

}
	
	






