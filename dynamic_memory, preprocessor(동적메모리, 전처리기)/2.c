#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
	int number;
	char title[100];
};
int main() {
	
	struct Book* p;
	p = (struct Book*)malloc(2 * sizeof(struct Book));
	
	if (p == NULL) {
		printf("메모리 할당 오류");
		exit(1);
	}
	p[0].number = 1;
	strcpy(p[0].title, "C.Programming");
	p[1].number = 2;
	strcpy(p[1].title, "Data Structure");
	printf("%d %s\n", p[0].number, p[0].title);
	printf("%d %s\n", p[1].number, p[1].title);
	free(p);
	return 0;

}
