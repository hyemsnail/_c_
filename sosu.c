#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n;
	printf("정수를 입력하시오:");
	scanf("%d", &n); // 정수 n 입력

	for (int i = 2; i < n; i++) { // 정수 n 보다 작은 i 설정
		if (n % i == 0) { // 나눴을 때 나머지가 0이면 n은 소수가 아님
			printf("%d는 소수가 아닙니다.", n);
			return 0; // 종료시킴, 안 쓰면 아래 출력문도 같이 나옴
		}
	}
	printf("%d는 소수입니다.", n); // n % i ==0 이 아닌 경우 -> 소수

	return 0;


}
