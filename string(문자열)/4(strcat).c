#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char dst[12] = "Hello ";
	strcat(dst, "world");
	printf("%s", dst);

	return 0;
}
