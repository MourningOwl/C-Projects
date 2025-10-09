#include <stdio.h>
// To be scrapped and redone
int main() {

	char grade;
	char second = 11;
	char third = 1; 
	int flag = 1;
	int flag2 = 1;
	
	printf("Please enter your grade:  ");

	scanf("%c%c%c", &grade, &second, &third);

	printf("%c%c%c", grade, second, third);

	if (second == 11) {flag = 0; flag2 = 0; printf("\nYou grade is an F!");}
	

	if (flag){
	switch(grade){
		case 9: printf("Your grade is an A");
			break;
		case 8: printf("Your grade is a B");
			break;
		case 7: printf("Your grade is a C");
			break;
		case 6: printf("Your grade is a D!");

	}
}

	if (grade == 1) {if (!third) {printf("\nYour grade is an A!"); flag2 = 0; }  }

	if (flag2) {if (grade<6) {printf("\nYour grade is an F!");}}

	return 0;

}
	
	



