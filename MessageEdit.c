#include <stdio.h>

#include <ctype.h>


int main()	{

	char string[50] = "0";
	printf("Please enter some text: ");


	for(int i = 0; i < 50; i++) {
		
		string[i] = getchar();

		if (string[i] == '\n')	{
			break;
		}

		string[i] = toupper(string[i]);

		switch(string[i]) {

			case ('A'):
				string[i] = '4';
				break;
			case ('B'):
				string[i] = '8';
				break;
			case ('E'):
				string[i] = '3';
				break;
			case ('I'):
				string[i] = '1';
				break;
			case ('O'):
				string[i] = '1';
				break;
			case ('S'):
				string[i] = '5';
				break;
		}

		putchar(string[i]);
		
	}
	printf("!!!!!!!!!!");
}	