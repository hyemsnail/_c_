#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	
	int buffer[] = { 10,20,30,40,50,60,70,80,90,100 };
	FILE* fp = NULL;
	size_t i, size, count;

	fp = fopen("binary.bin", "wb");
	if (fp == NULL)
	{
		fprintf(stderr, "binary.bin 파일을 열 수 없습니다.");
		exit(1);
	}
	size = sizeof(buffer[0]);
	count = sizeof(buffer) / size;

	i = fwrite(buffer, size, count, fp);
	fclose(fp);

}
