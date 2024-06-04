#include <stdio.h>
int check_prime(int n);



int main() {
	for(int i=0;i<100;i++)
		if(check_prime(i) == 1)
			printf("%d ", i);
		
	
	return 0;
}
int check_prime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
		

	
}
