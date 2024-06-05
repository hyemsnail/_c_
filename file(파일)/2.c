#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp;

	fp = fopen("alphabet.txt", "r");
	if (fp == NULL) {
		fprintf(stderr,"file open error!\n");
		exit(1);
	}
	else
		printf("file open success!\n");

	char c;
	while ((c = fgetc(fp)) != EOF)
		putchar(c);

	fclose(fp);

	return 0;
}
