#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define WORDS 5

int main() {
	
	int index;
	char dic[WORDS][2][30] = {
		{"book","책"},
		{"boy","소년"},
		{"computer","컴퓨터"},
		{"language","언어"},
		{"rain","비"}
	};
	char word[30];
	printf("단어를 입력하시오:");
	scanf("%s", word);

	for(index = 0;index<=WORDS;index++){
		if (strcmp(word,dic[index][0] ) == 0) {
			printf("%s: %s\n", word,dic[index][1]);
			return 0;
		}
		
	}
	printf("사전에서 발견되지 않았습니다.\n");
	return 0;

	

}
