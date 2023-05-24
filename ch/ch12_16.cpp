#include <stdio.h>


int Add(int a, int b) {
    return a + b;
}

// 함수
int main() {

    int iData = Add(100, 200);

    iData = Add(300, 400);
    iData = Add(222, 700);
    iData = Add(333, 555);





    // 반복문
    // for (/*반복자 초기화*/; /*반복자 조건 체크*/; /*반복자 변경*/) {
    // }

    for (int i = 0; i < 4; ++i) {
        if (i % 2 == 1) {
            continue; // 다음 i로 넘어감
        }
        printf("for Output Test\n");

        // break; // 반복문 종료
    }

    // while(/*조건체크*/) {
    // }

    // int i = 0;
    // while (i < 10) {
    //     printf("while Output Test\n");
    //     ++i;

    //     continue;
    //     break;
    // }

    // printf
    printf("abcdef %d \n", 10); // %d에 따른 정수를 치환
    printf("abcdef %f \n", 3.14f); // %f에 따른 실수를 치환

    for (int i = 0; i < 10; ++i) {
        printf(" Ouput i : %d \n", i);
    }


    // scanf
    int iInput = 0;
    scanf("%d", &iInput);
    // scanf_s("%d", &iInput); //vscode 경우 scanf로 표현

    // 함수가 사용하는 메모리 영역
    // stack 메모리 영역


    return 0;
}