#include <stdio.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main() {
	struct student s;

	s.number = 101;
	strcpy(s.name, "Kim");
	s.grade = 4.3;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("성적: %f\n", s.grade);

	return 0;
}
