#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SOL "apple"

int main() {
	char s[100] = SOL;
	char ans[100];
	int i, len;
	
	len = strlen(s);
	for (i = 0; i < len; i++) {
		int pos1 = rand() % len;
		int pos2 = rand() % len;
		char tmp = s[pos1];
		s[pos1] = s[pos2];
		s[pos2] = tmp;

	}
	do {
		printf("%s 는 어떤 단어가 스크램블된 것일까요?", s);
		scanf("%s", ans);
	} while (strcmp(ans,SOL) != 0);

	printf("축하합니다.\n");
	return 0;
	

}
