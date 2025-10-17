#include <stdio.h>

int main() {

	int month, day, format;

	printf("Enter the days in the month, and the starting day of the week \n ");

	scanf("%d%d", &month, &day);

	format = day;

	while (--format) {

		printf("\t");
	}

	for (int i = 1; i < month+1; i++, day++) {

		if (day > 7){
			printf("\n");
			day = 1;
		}

		printf("\t%d", i);

	}
}