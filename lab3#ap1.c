#include <stdio.h> 
#include <stdlib.h> //malloc 함수를 사용하기 위해 선언한 헤더파일

void main()// 메인 함수 시작
{
    printf("[-----[정하용][2018038025]-----]\n\n");

    int list[5];//크기가 5인 배열 선언
    int *plist[5] = {NULL,}; //크기가 5인 포인터 배열 선언, 값을 NULL으로 초기화(공간을 비워둠)

    plist[0] = (int *)malloc(sizeof(int)); //plist[0]에 동적할당

    list[0] = 1; // list[0]에 1넣음
    list[1] = 200; // list[1]에 200 넣음

    *plist[0] = 200; //*plist[0]에 200 넣음

    printf("value of list[0]        = %d\n", list[0]); // list[0]를 정수 형태로 출력
    printf("address of list[0]      = %p\n",&list[0]); // &list[0]를 포인터 주소 형태로 출력
    printf("value of list           = %p\n",list); // list 포인터 주소 형태로 출력
    printf("adress of list (&list)  = %p\n",&list); // &list 포인터 주소 형태로 출력

    printf("------------------------------------\n\n");
    printf("value of list[1]     = %d\n",list[1]); // list[1]를 정수 형태로 출력
    printf("adress of list[1]    = %p\n",&list[1]); //&list[1]를 포인터 주소 형태로 출력
    printf("value of *(list+1)   = %d\n",*(list+1)); //*(list + 1)를 정수 형태로 출력
    printf("address of list+1    = %p\n",list+1); //list+1을 포인터 주소 형태로 출력

    printf("------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]); //*plist[0]을 정수 형태로 출력
    printf("&plist[0]          = %p\n",&plist[0]); //&plistp[0]을 포인터 주소 형태로 출력
    printf("&plist             = %p\n",&plist); //&plist를 포인터 주소 형태로 출력
    printf("plist              = %p\n",plist); //plist를 포인터 주소 형태로 출력
    printf("plist[0]           = %p\n",plist[0]); //plist[0]을 포인터 주소 형태로 출력
    printf("plist[1]           = %p\n",plist[1]); //plist[1]을 포인터 주소 형태로 출력
    printf("plist[2]           = %p\n",plist[2]); //plist[2]을 포인터 주소 형태로 출력
    printf("plist[3]           = %p\n",plist[3]); //plist[3]을 포인터 주소 형태로 출력
    printf("plist[4]           = %p\n",plist[4]); //plist[4]을 포인터 주소 형태로 출력

    free(plist[0]); //동적할당 해제
}