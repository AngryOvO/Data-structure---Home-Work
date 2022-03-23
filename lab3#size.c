#include <stdio.h>//헤더파일 선언
#include <stdlib.h>

void main()
{
    printf("[-----[정하용][2018038025]-----]\n\n");
    
    int **x; //이중 포인터 변수 x 선언

    printf("sizeof(x) = %lu\n", sizeof(x)); //x의 크기 출력 
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //*x의 크기 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x의 크기 출력
}