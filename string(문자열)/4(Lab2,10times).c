
#include <stdio.h>
#define MAX_TRIES 10

int main() {
	char solution[100] = "meet at midnight";
	char answer[100] = "---- -- --------";
	char ch;
	int i;
	int tries = 0;

	while (1) {
		printf("\n문자열을 입력하시요:%s\n", answer);
		printf("글자를 추측하시오(시도횟수:%d)",tries);
		ch = getch();
		for (i = 0; solution[i] != NULL; i++) {
			if (solution[i] == ch)
				answer[i] = ch;

		}
		if (strcmp(solution, answer) == 0) {
			printf("정답!!\n");
			break;
		}
		if (tries++ >= MAX_TRIES) {
			printf("최대 시도 횟수(%d)를 초과했습니다", MAX_TRIES);
		}
	}
	return 0;

	

}
