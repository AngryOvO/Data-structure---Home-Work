#include <stdio.h> //헤더파일 선언

struct student1 //구조체 student1 선언
{
    char lastName;
    int studentId;
    char grade;
};

typedef struct //typedef를 통해 구조체 student2 선언
{
    char lastName;
    int studentId;
    char grade;
} student2;

int main()
{
    printf("[-----[정하용][2018038025]-----]\n\n");
    
    struct student1 st1 = {'A', 100, 'A'}; //구조체 변수 st1선언 및 초기화

    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId); // 구조체변수 st1에 포함된 멤버들 출력
    printf("st1.grade = %c\n",st1.grade);

    student2 st2 = {'B',200,'B'}; //구조체 변수 st2선언 및 초기화

    printf("\nst2.lastName = %c\n",st2.lastName); 
    printf("st2.studentId = %d\n",st2.studentId); //구조체변수 st2에 포함된 멤버들 출력
    printf("st2.grade = %c\n", st2.grade);

    student2 st3; //구조체 변수 st3 선언

    st3 = st2; //st3에 st2값 할당

    printf("\nst3.lastName = %c\n",st3.lastName);
    printf("st3.studentId = %d\n",st3.studentId); //구조체 변수 st3에 포함된 멤버들 출력
    printf("st3.grade = %c\n", st3.grade);

    /* equality test */
    /*
    if(st3 == st2) //st3와 st2가 같으면
        printf("equal\n"); //equal 출력
    else // 다르면
        printf("not equal\n"); //not equal 출력
    */
   /* not working */
    return 0;
}