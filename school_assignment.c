#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
    char name[20];
    int kor;
    int eng;
    int math;
    float avg;
};

int main()
{
    FILE* fp;
    int num;
    int count = 0;
    struct Student student[20];

    while (1)
    {
        printf("====== 학생 성적 관리 프로그램 ======\n");
        printf(" 1. 학생 정보 입력\n 2. 학생 정보 출력\n 3. 프로그램 저장 및 종료\n\n");
        printf("원하는 번호 입력(반드시 정수로 입력할 것):");
        scanf("%d", &num);

        switch (num)
        {
        case 1: // 학생 정보 입력
            if (count < 5) // 현재 5명 미만 
            {
                system("cls");
                printf("====== 학생 정보 입력 ====== [%d / 5]\n", count + 1);
                printf("이름: ");
                scanf("%s", student[count].name);
                printf("국어: ");
                scanf("%d", &student[count].kor);
                printf("영어: ");
                scanf("%d", &student[count].eng);
                printf("수학: ");
                scanf("%d", &student[count].math);
                student[count].avg = (float)(student[count].kor + student[count].eng + student[count].math) / 3.0;
                count++;
                printf("\n");
                break;
            }
            else
            {
                printf("5명의 학생 정보가 있어 더 이상 추가 불가\n\n");
                break;
            }
        case 2: // 학생 정보 출력
            system("cls");
            printf("====== 학생 정보 출력하기 ======\n");
            printf("1. 전체 출력 2. 선택 출력\n");
            printf("원하는 번호 입력(반드시 정수로 입력할 것):");
            int n;
            scanf("%d", &n);
            if (n == 1) // 전체 출력
            {
                for (int i = 0; i < count; i++)
                {
                    printf("[%d/5]\n", i + 1);
                    printf("이름: %s\n 국어: %d\n 영어: %d\n 수학: %d\n 평균: %f\n", student[i].name, student[i].kor, student[i].eng, student[i].math, student[i].avg);
                    printf("\n");
                }
                if (count == 0) // 아무 학생 정보 X
                {
                    printf("등록된 정보가 없습니다\n\n");
                }
            }
            else if (n == 2) // 선택 출력
            {
                printf("찾으실 학생의 이름을 입력하세요 :");
                char name[20];
                scanf("%s", name);
                printf("\n");
                int found = 0; // 이름이 발견되었는지 여부를 나타냄
                for (int i = 0; i < count; i++)
                {
                    if (strcmp(name, student[i].name) == 0)
                    {
                        printf("[%d/5]\n", i + 1);
                        printf("이름: %s\n 국어: %d\n 영어: %d\n 수학: %d\n 평균: %f\n", student[i].name, student[i].kor, student[i].eng, student[i].math, student[i].avg);
                        printf("\n");
                        found = 1; // 이름을 발견했음을 표시
                        break;
                    }
                }
                if (found == 0) // 이름 발견 X 
                {
                    printf("존재하지 않는 이름입니다.\n\n");
                }
            }
            else
            {
                printf("다시 입력해주세요\n\n");
            }
            break;

        case 3: // 프로그램 저장 및 종료
            while (1)
            {
                printf("현재까지 저장된 정보를 파일에도 저장하시겠습니까?(소문자 한 글자로 입력) (y/n):");
                char answer[20];
                scanf(" %s", &answer);
                if (strcmp(answer, "y") == 0 || strcmp(answer, "n") == 0)
                {
                    if (strcmp(answer, "y") == 0) // y 입력
                    {
                        FILE* fp = fopen("student_file.txt", "w"); //쓰기 모드로 파일 열기
                        if (fp != NULL) //파일이 성공적으로 열린 경우
                        {
                            for (int i = 0; i < count; i++)
                            {
                                fprintf(fp, "%s\t", student[i].name);
                                fprintf(fp, "%d\t", student[i].kor);
                                fprintf(fp, "%d\t", student[i].eng);
                                fprintf(fp, "%d\t", student[i].math);
                                fprintf(fp, "%f\t", student[i].avg);
                                fprintf(fp, "\n");
                            }
                            printf("저장되었습니다.\n");
                            fclose(fp);
                            break;
                        }
                        else // 저장 실패 경우
                        {
                            printf("저장에 실패했습니다.\n");
                        }
                    }
                    if (strcmp(answer, "n") == 0) // n을 입력할 경우 반복문 탈출, 프로그램 종료
                    {
                        break;
                    }
                }
                else //y나 n이 아닌 다른 것을 입력한 경우 
                {
                    printf("다시 입력해주세요\n");
                }
            }
            printf("프로그램을 종료합니다\n");
            return 0;

        default: // 1,2,3 이 아닌 다른 숫자 입력
            printf("다시 입력하세요\n\n");
        }
        
    }
}
