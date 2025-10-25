#include <stdio.h>

int user(char square) {
	while (getchar() != '\n') {

	}

	return 0;
}


int main(){

	char square = 0;

	long int num;

	printf("enter a positive number to get even squares: ");

	scanf("%ld", &num);

	for(int i = 1; i < num+1; i++){
		if (i % 2){
			continue;
		}

		for(int j = 1; (j * j) < (num + 1); j++) {
			if (square > 24) {
				printf("Please press ENTER to continue...");
				square = user(square); //return 0
		}

		if (j * j == i ) {
			square++;
			printf("%d\n", i);
			break;
		}
	}
}
}
