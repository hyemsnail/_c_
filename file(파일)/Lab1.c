#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE* fp1, * fp2;
	char file1[100], file2[100];

	printf("원본 파일 이름:");
	scanf("%s", file1);
	printf("복사 파일 이름:");
	scanf("%s", file2);

	//첫번째 파일 읽기 모드로 열기
	if ((fp1 = fopen(file1, "r")) == NULL) {
		fprintf(stderr, "원본 파일 %s을 열 수 없습니다.", file1);
		exit(1);
	}
	
	// 두번째 파일 쓰기 모드로 열기
	if ((fp2 = fopen(file2, "w")) == NULL) {
		fprintf(stderr, "복사 파일 %s을 열 수 없습니다.", file2);
		exit(1);
	}

	printf("%d", fp1);
	int c;
	//fp1에서 한 글자씩 읽어서 fp2로 쓴다
	while ((c = fgetc(fp1)) != EOF)
		fputc(c, fp2);
	
	fclose(fp1);
	fclose(fp2);

	return 0;
}
