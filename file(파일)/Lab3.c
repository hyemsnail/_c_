#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	FILE* fp;
	int number,count = 0;
	char name[30];
	float score,total =0.0;

	if ((fp = fopen("scores.txt", "r")) == NULL)
	{
		fprintf(stderr, "성적 파일을 열 수 없습니다.\n");
		exit(1);
	}
	while (!feof(fp)) { // 파일 끝 체크
		//한 줄에 한 명씩 적혀있는 학번, 이름, 성적을 읽어들임
		fscanf(fp, "%d %s %f", &number, name, &score);
		printf("%d %s %f\n", number, name, score);
		total +=score; // 성적 총점 계산
		count++;
	}
	
	printf("평균 = %f\n", total / count); // 성적 평균 계산
	fclose(fp);
	
	return 0;

}
