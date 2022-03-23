#include <stdio.h> //헤더파일 선언

struct student //구조체 student 선언
{
    char lastName[13];  /* 13 bytes */
    int studentId;      /* 4 bytes */
    short grade;        /* 2 bytes */

};

int main() //메인함수 시작
{
    printf("[-----[정하용][2018038025]-----]\n\n");
    
    struct student pst; //구조체변수 pst 선언

    printf("size of student = %ld\n", sizeof(struct student)); //구조체의 크기 출력
    printf("size of int = %ld\n", sizeof(int)); //data type int 의 크기 출력
    printf("size of short = %ld\n", sizeof(short)); //data type short 의 크기 출력

    return 0; //프로그램 종료
}