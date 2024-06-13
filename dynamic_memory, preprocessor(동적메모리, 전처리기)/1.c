#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int* pi;
	pi = (int *) malloc(5 * sizeof(int));
	if (pi == NULL) {
		printf("malloc error!\n");
		exit(1);
	}
	*pi = 1;       //pi[0] = 1
	*(pi + 1) = 2;  // pi[1] = 2 
	*(pi + 2) = 3;
	*(pi + 3) = 4;
	*(pi + 4) = 5;

	for (int i = 0; i < 5; i++)
		printf("%d", pi[i]);

	free(pi);

	return 0;
}
