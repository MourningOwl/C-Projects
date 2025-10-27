#include <stdio.h>

#include <ctype.h>

int main(){
	int scrabbleV = 0; // I tried summing an unintiialized garbage value with 2, 3, etc. I thus got random values. (FIXED)

	char scrabbleC;

	printf("Please enter a scrabble word letter by letter:");

	while((scrabbleC = getchar()) != '\n') {
		switch(toupper(scrabbleC)) {
			case('D'): 
			case('G'): 
				scrabbleV += 2;
				break;
			case('B'):
			case('C'):
			case('M'):
			case('P'): 
				scrabbleV += 3;
				break;
			case('F'):
			case('H'):
			case('V'):
			case('W'):
			case('Y'):
				scrabbleV += 4;
				break;
			case('K'):
				scrabbleV += 5;
				break;
			case('J'):
			case('X'): 
				scrabbleV += 8;
				break;
			case('Q'):
			case('Z'):
				scrabbleV += 10;
				break;
			default: 
				scrabbleV += 1;
		}
	}

		
	printf("\n%d", scrabbleV);

	return 0;
}





	



	