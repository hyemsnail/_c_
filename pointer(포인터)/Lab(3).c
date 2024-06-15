#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int array[5], i;
	int* p = array;

	printf("5개의 정수를 입력하시오:");
	for (i = 0; i < 5; i++)
		scanf("%d", p+i);

	printf("역순:");
	for (i = 4; i >= 0; i--)
		printf("%d ", *(p+i));

	printf("\n");
	return 0;
}
