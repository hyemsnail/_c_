#include <stdio.h>
#define SIZE 5
double get_array_avg(int values[], int n);
void print_array(int values[],int n);

int main() {
	int i;
	int data[SIZE] = { 10,20,30,40,50 };
	double result;

	print_array(data, SIZE);
	result = get_array_avg(data, SIZE);
	printf("배열 원소들의 평균 = %f\n", result);
	return 0;
}
double get_array_avg(int values[], int n) {
	int i;
	double sum = 0.0;
	for (i = 0; i < 5; i++)
		sum += values[i];
	return sum / n;
}
void print_array(int values[], int n) {
	int i;
	printf("[");
	for (i = 0; i < 5; i++)
		printf("%d ", values[i]);
	printf("]\n");
}
