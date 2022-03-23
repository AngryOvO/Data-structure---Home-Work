#include <stdio.h> //헤더파일 선언

void print1 (int *ptr, int rows); //print1이라는 함수의 프로토타입 선언

int main() //메인함수 시작
{
    printf("[-----[정하용][2018038025]-----]\n\n");
    
    int one[] = {0,1,2,3,4}; // one이라는 배열에 값 초기화

    printf("one     = %p\n", one); //one을 포인터 주소 형태로 출력
    printf("&one    = %p\n",&one); //&one을 포인터 주소 형태로 출력
    printf("&one[0] = %p\n",&one[0]); //&one[0]을 포인터 주소 형태로 출력
    printf("\n"); 

    print1(&one[0], 5); // print1함수에 one[0]의 주소와 크기 5 를 인자로 넘겨주고 실행

    return 0; // 프로그램 종료


}

void print1 (int *ptr, int rows) //매개변수로 int형 포인터 변수와 int형 변수를 이용해 인자를 받음)
{/* print out a one=dimensional array using a pointer */
    
    int i; //지역변수 i 선언
    printf("Address \t Contens\n");
    for(i=0; i< rows; i++) //i는 0부터 rows-1까지 rows번 반복
        printf("%p \t %5d\n", ptr +i,*(ptr+i)); // ptr +1와 *(ptr+1)을 포인터 주소형과 정수형태로 출력
    printf("\n");
//입력받은 배열의 주소와 그 안의 값을 출력하는 함수
}