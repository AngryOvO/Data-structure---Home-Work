#include <stdio.h>

int main()
{
    int i; // int형 변수 i 선언
    int *ptr; //int 포인터형 변수 ptr 선언
    int **dptr; // int 이중 포인터형 변수 dptr 선언

    i = 1234; // 변수 i에 정수 1234를 넣음

    printf("[----- [정하용] [2018038025]-----]\n\n");

    printf("[cheking values before ptr = &i] \n"); // ptr = &i식을 사용하기 전에 각 변수들의 값과 주소를 출력
    printf("value of i == %d\n", i); // 변수 i의 값을 정수 형태로 출력
    printf("adress of i == %p\n", &i); // 변수 i의 주소를 포인터 주소 형태로 출력
    printf("value of ptr == %p\n", ptr); // 포인터 변수 ptr의 값을 포인터 주소 형태로 출력
    printf("adress of ptr == %p\n", &ptr); // 포인터 변수 ptr의 주소를 포인터 주소 형태로 출력
    // 변수 i의 값은 1234가 출력될 것이고, 포인터 변수 ptr은 따로 초기화를 하지 않았으므로 쓰레기값이 출력됨


    ptr = &i;           /* ptr is now holding the adress of i */
    // 포인터 변수 ptr에 변수 i의 주소를 할당함

    printf("\n[checking values after ptr = &i] \n");

    printf("value of i== %d\n", i); // 변수 i의 값을 정수 형태로 출력
    printf("address of i== %p\n", &i); // 변수 i의 주소를 포인터 주소 형태로 출력
    printf("value of ptr== %p\n", ptr); // 포인터 변수 ptr의 값을 포인터 주소 형태로 출력
    printf("address of ptr== %p\n", &ptr); // 포인터 변수 ptr의 주소를 포인터 주소 형태로 출력
    printf("value of *ptr== %d\n", *ptr); // 포인터 변수 ptr이 가리키는 변수 i의 값을 정수 형태로 출력
    // i의 값과 i의 주소는 변하지 않았으므로 위와 동일한 값이 출력될 것이다.
    // ptr에 i의 주소를 할당했으므로 ptr의 값은 i의 주소가 출력될 것이고
    // ptr의 주소는 변한게 없으므로  이전의 값과 동일한 값이 출력될 것이다.
    // *ptr은 ptr이 가리키는 주소인 변수 i의 값을 출력하므로 변수 i의 값인 1234가 출력될 것

    dptr= &ptr;         /* dptris now holding the address of ptr*/
    // 이중 포인터 변수 dptr에 포인터변수 ptr의 주소를 할당함


    printf("\n[checking values after dptr= &ptr] \n"); 
    printf("value of i== %d\n", i); // i의 값 출력
    printf("address of i== %p\n", &i); // i의 주소 출력
    printf("value of ptr== %p\n", ptr); // ptr의 값 출력
    printf("address of ptr== %p\n", &ptr); // ptr의 주소 출력
    printf("value of *ptr== %d\n", *ptr); // ptr이 가리키는 변수 i의 값을 출력
    printf("value of dptr== %p\n", dptr); // dptr의 값을 출력
    printf("address of dptr== %p\n", &dptr); // dptr의 주소를 출력
    printf("value of *dptr== %p\n", *dptr); // dptr이 가리키는 포인터 변수 ptr의 값을 출력
    printf("value of **dptr== %d\n", **dptr); // dptr이 가리키는 포인터 변수 ptr이 가리키는 변수 i의 값 출력
    // 라인 41부터 45까지에는 변화가 없으므로 위와 동일한 값들이 출력될 것이다.
    // 라인 46부터는 dptr에 관한 내용인데 먼저 이중포인터 변수 dptr에 ptr의 주소를 할당했으므로 dptr의 값은 ptr의 주소가 출력될 것이다.
    // dptr의 주소는 포인터 변수 dptr에게 할당된 주소값이 출력될 것이다
    // *dptr은 dptr이 가리키는 포인터 변수 ptr의 값을 나타내는 것으로 포인터 변수 ptr에는 변수 i의 주소가 할당 되었으므로 변수 i의 주소가 출력될것이다.
    // **dptr은 dptr이 가리키는 변수 ptr이 가리키는 변수 i의 값을 나타내는것으로 변수 i의 값이 출력될 것이다.

    *ptr= 7777;         /* changing the value of *ptr*/
    // ptr이 가리키는 주소의 값에 7777을 할당

    printf("\n[after *ptr= 7777] \n"); 
    printf("value of i== %d\n", i); // i출력
    printf("value of *ptr== %d\n", *ptr); // *ptr출력
    printf("value of **dptr== %d\n", **dptr); //**dptr출력
    // ptr이 가리키는 변수 i의 값에 7777을 넣었으므로 변수 i를 출력했을 때 7777이 출력될 것이다.
    // *ptr을 출력했을 때, ptr이 가리키는 변수 i의 값을 출력할 것이므로 7777출력
    // 마찬가지로 **dptr은 dptr이 가리키는 포인터 변수 ptr이 가리키는 변수 i의 값을 출력할 것이므로 역시 7777이 출력될 것이다.

    **dptr= 8888;           /* changing the value of **dptr*/
    // **dptr에 8888을 넣음

    printf("\n[after **dptr= 8888] \n"); 
    printf("value of i== %d\n", i); // i 출력
    printf("value of *ptr== %d\n", *ptr); // *ptr 출력
    printf("value of **dptr== %d\n", **dptr);// **dptr 출력
    // dptr이 가리키는 포인터 변수 ptr이 가리키는 변수 i의 값에 8888을 넣었으므로 i, *ptr, **dptr 모두 8888이 출력될 것이다.

    return 0; // 프로그램 종료
}