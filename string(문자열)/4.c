#include <stdio.h>


int main() {
	char solution[100] = "meet at midnight";
	char answer[100] = "---- -- --------";
	char ch;
	int i;

	while (1) {
		printf("\n문자열을 입력하시요:%s\n", answer);
		printf("글자를 추측하시오:");
		ch = getch();
		for (i = 0; solution[i] != NULL; i++) {
			if (solution[i] == ch)
				answer[i] = ch;

		}
		if (strcmp(solution, answer) == 0) {
			printf("정답!!\n");
			break;
		}
	}
	return 0;

	

}
