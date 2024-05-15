#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n;
	printf("정수를 입력하시오:");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%2d", j);// 정수를 2칸에 출력을 함. 간격을 벌린다는 소리
		}
		printf("\n");

	}
	return 0;
}
