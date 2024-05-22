#include <stdio.h>

int main() {

	int ch; // 정수형
	ch = getchar(); // 첫번째 문자 입력받음
	putchar(ch); // 문자를 출력 
	
	getchar(); // 입력 버퍼 없애기

	int ch2; // 정수형
	ch2 = getchar(); // 두번째 문자 입력받음
	putchar(ch2); // 문자를 출력 

	return 0;

}
