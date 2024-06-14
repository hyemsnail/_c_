#include <stdio.h>

int main() {

	int j = 0;
	int num[4] = { 10,20,30,40 };
	int* pnum = num;

	j = *pnum;
	printf("j = %d, pnum =%p\n", j, pnum);

	j = *++pnum;
	printf("j=%d, pnum =%p\n", j, pnum);

	j = ++ * pnum;
	printf("j=%d, pnum = %p\n", j, pnum);

	

	return 0;

} 
