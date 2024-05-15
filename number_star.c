#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n;
	
	for (int k = 1; k <= 10; k++) {
	
		printf("데이터를 입력하시오:");
		scanf("%d", &n);
		if (n >= 1 && n <= 50) {

			for (int i = 1; i <= n; i++) {

				printf("*");
				



			}
			printf("\n");

		}
	}
	
	

		
	


	return 0;
}
