#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	char str[][5] = { "R2D2","C3P0","R2A6" };
	int n;
	puts("R2타입 드로이드 조회...");
	for (n = 0; n < 3; n++)
		if (strncmp(str[n], "R2xx", 2) == 0)
			printf("찾았음 %s\n", str[n]);

	return 0;
}
