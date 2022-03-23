#include <stdio.h>
#include <stdlib.h> //malloc 함수 사용하기 위해 선언한 헤더파일

void main() // 메인함수 시작
{
    printf("[-----[정하용][2018038025]-----]\n\n");
    
    int list[5]; // 크기가 5인 배열 list 선언
    int *plist[5]; //크기가 5인 포인터 배열 plist선언

    list[0] = 10; //list[0]에 10 넣음
    list[1] = 11; //list[1]에 11 넣음

    plist[0] = (int*)malloc(sizeof(int)); //plist[0]에 동적할당

    printf("list[0] \t= %d\n",list[0]); // list[0]을 정수 형태로 출력
    printf("address of list \t= %p \n",list); //list를 포인터 주소 형태로 출력
    printf("address of list[0] \t= %p\n",&list[0]);// &list[0]을 포인터 주소 형태로 출력
    printf("address of list + 0 \t= %p\n",list+0); //list+0을 포인터 주소 형태로 출력
    printf("address of list + 1 \t= %p\n",list+1); //list+1을 포인터 주소 형태로 출력
    printf("address of list + 2 \t= %p\n",list+2); //list+2을 포인터 주소 형태로 출력
    printf("address of list + 3 \t= %p\n",list+3); //list+3을 포인터 주소 형태로 출력
    printf("address of list + 4 \t= %p\n",list+4); //list+4을 포인터 주소 형태로 출력
    printf("address of list[4] \t= %p\n",&list[4]);//&list[4]을 포인터 주소 형태로 출력

    free(plist[0]); // 동적할당 해제
}