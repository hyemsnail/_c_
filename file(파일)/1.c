#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp;

	fp = fopen("test1.txt", "w");
	if (fp == NULL)
		printf("file open error!\m");
	else
		printf("file open success!\n");

	fclose(fp);

	return 0;
}
