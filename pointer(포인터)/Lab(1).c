#include <stdio.h>

void swap(int* p, int* q) {
	int tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
}
int main() {
	int a = 100;
	int b = 200;
	printf("swap() 호출전 a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("swap() 호출후 a=%d b=%d", a, b);
	return 0;


}
