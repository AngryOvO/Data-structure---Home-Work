#include <stdio.h>//헤더파일 선언
#include <stdlib.h>

void main()
{
    int **x;

    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));
}