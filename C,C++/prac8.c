#include <stdio.h>
int main()
{
    char inputData[50]; // 입력 : Hello, World
    scanf("%s", inputData);
    printf("%.4s", inputData);
    printf("%3.2s", inputData);
}

/*
정답:
Hell He

- scanf의 %s는 공백을 만나면 멈춤! (Hello,)
- `.n`: 문자 n개만 출력
*/