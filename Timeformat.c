
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
int main() {

	int hours;
	int minutes;
	char seperate;
	char *midday;
	uint8_t transition = 0;
	uint8_t flag = 1;





	printf("Please enter your time in a 24-Hour format: ");

	scanf("%d" , &hours);
	scanf("%c" , &seperate);
	scanf("%d" , &minutes);

	switch(hours){
		case 12: midday = "PM"; transition = 0; flag = 0;  
		break;
		case 24: midday = "AM"; transition = 0; hours -= 12; flag = 0;}

	if (hours < 12) {midday = "AM";}


	if (hours > 12 && flag)  {midday = "PM"; hours -= 12;}

	printf("\n Here it is in a 12 hour format: %d%c%d" , hours, seperate, minutes);

	if (!flag) {
		printf("%d", transition);
	}

	printf("%s\t" , midday);

	return 0;

}