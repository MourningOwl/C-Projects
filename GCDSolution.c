#include <stdio.h>


int main(){
	int m ,n, r;

	start: 
		printf("The Greatest Common Divisor (GCD) will be computed! \n ");

		printf("Please enter two positive integers:");

		scanf("%d%d", &m, &n);

		if (m < 0 || n < 0){ // Improper user input
			printf("Please enter a positive integer!\n");
			goto start;
		}
		while(n != 0) {
			r = (m % n);
			m = n;
			n = r;
			printf("%d\n", n);
		}

		printf("The greatest Common Divisor is: %d", m );
		return 0;







}