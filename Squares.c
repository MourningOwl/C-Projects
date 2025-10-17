#include <stdio.h>

int main(){

int num;

printf("enter a positive number to get even squares: ");

scanf("%d", &num);

for(int i = 1; i < num+1; i++){

	if (i%2){
		continue;
	}

	for(int j = 1; (j * j) < (num + 1); j++) {
		if (j * j == i && j * j % 2 == 0) {
			printf("%d\n", i);
			break;
		}

	}


}



}