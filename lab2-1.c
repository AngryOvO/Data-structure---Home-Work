#include <stdio.h>

int main()
{
    char charType; // char형으로 변수 charType 선언
    int integerType; // int형으로 변수 integerType 선언
    float floatType; // float형으로 변수 floatType 선언
    double doubleType; // double형으로 변수 doubuleType 선언

    printf("[----- [정하용] [2018038025]-----]\n\n"); 

    printf("Size of char: %ld byte\n",sizeof(charType)); // 10진수 정수 형태로 변수 charType의 크기를 출력
    printf("Sizeof int: %ldbytes\n",sizeof(integerType)); // 10진수 정수 형태로 변수 integerType의 크기를 출력
    printf("Sizeof float: %ldbytes\n",sizeof(floatType)); // 10진수 정수 형태로 변수 floatType의 크기를 출력
    printf("Sizeof double: %ldbytes\n",sizeof(doubleType)); // 10진수 정수 형태로 변수 doubleType의 크기를 출력
    // 위 내용은 각 자료형의 크기를 출력하는 부분으로 sizeof(변수명)의 형식으로 각 변수의 자료형의 크기를 출력함
    // char는 크기가 1byte, int와 float는 4byte, double은 8byte가 출력될 것으로 보임

    printf("-----------------------------------------\n");

    printf("Sizeof char: %ldbyte\n",sizeof(char)); // 10진수 정수 형태로 자료형 char의 크기를 출력
    printf("Sizeof int: %ldbyte\n",sizeof(int)); // 10진수 정수 형태로 자료형 char의 크기를 출력
    printf("Sizeof float: %ldbyte\n",sizeof(float)); // 10진수 정수 형태로 자료형 char의 크기를 출력
    printf("Sizeof double: %ldbyte\n",sizeof(double)); // 10진수 정수 형태로 자료형 char의 크기를 출력
    // 위 내용은 각 자료형의 크기를 변수를 통하지 않고 직접 sizeof 함수에 입력해 sizeof(자료형)의 형태로 각 자료형의 크기를 출력함
    // 이전 변수를 이용해 크기를 출력한 것과 마찬가지로 char는 크기가 1byte, int와 float는 4byte, double은 8byte가 출력될 것으로 보임

    printf("-----------------------------------------\n");

    printf("Sizeof char*: %ldbyte\n",sizeof(char*)); // 10진수 정수 형태로 자료형 char의 주소의 크기를 출력
    printf("Sizeof int*: %ldbyte\n",sizeof(int*)); // 10진수 정수 형태로 자료형 int의 주소의 크기를 출력
    printf("Sizeof float*: %ldbyte\n",sizeof(float*)); // 10진수 정수 형태로 자료형 float의 주소의 크기를 출력
    printf("Sizeof double*: %ldbyte\n",sizeof(double*)); // 10진수 정수 형태로 자료형 double의 주소의 크기를 출력
    // 위 내용은 주소값의 크기 즉 각 자료형의 값을 저장하는 메모리의 위치를 가르키는 주소를 담는 크기를 출력함
    // 각 자료형의 크기와는 상관 없이 주소를 담는 크기가 출력되므로 전부 4byte가 출력될 것으로 보임


    return 0;
}