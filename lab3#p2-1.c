#include <stdio.h> //헤더파일 선언

#define MAX_SIZE 100 //100의 값을 저장한 매크로 생성

float sum(float [], int); // sum함수의 프로토타입 
float input[MAX_SIZE], answer; // 크기가 MAX_SIZE인 float형 배열과 변수 answer을 전역변수로 선언
int i; //int형 전역변수 i 선언

void main(void) //메인함수 시작
{
    printf("[-----[정하용][2018038025]-----]\n\n");
    
    for(i=0; i < MAX_SIZE; i++) //0부터 99까지 100번 반복
        input[i] = i; // 배열에 인덱스값과 같은 크기의 숫자를 할당 ex) input[0] = 0; input[1] = 1;

    /*for checking call by reference */
    printf("address of input = %p\n", input); //input의 값을 포인터 주소형태로 출력

    answer = sum(input, MAX_SIZE); //answer 에 sum함수의 리턴값 할당
    printf("The sum is: %f\n",answer); //answer를 float형으로 출력

}

float sum(float list[], int n) //sum함수 매개변수로 배열의 이름과 정수를 하나씩 입력받음
{
    printf("value of list = %p\n", list); // list의 값을 포인터 주소 형태로 출력
    printf("address of list = %p\n\n", &list); //&list의 값을 포인터 주소 형태로 출력

    int i; //sum 함수 안에서만 사용될 지역변수 i 선언
    float tempsum = 0; //지역변수 tempsum을 선언과 동시에 0으로 초기화
    for(i=0; i<n; i++) // i가 0부터 n-1까지 총 n번 반복
        tempsum += list[i]; //tempsum에 list[i]번째의 값을 더해서 할당 
    return tempsum; // tempsum 리턴
// 위함수는 배열의 주소와 크기를 입력받아 각 인덱스 안의 값들을 더해서 리턴하는 함수
}