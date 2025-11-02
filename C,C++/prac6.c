#include <stdio.h>
int main()
{
    int a[5] = {3, 1};
    int i;

    for (i = 0; i < 5; i++)
        printf("%d\n", a[i]);
}

/*
정답: 
3
1
0
0
0

- 배열 크기는 5이지만 초기값은 2개만 지정
- 나머지 원소는 자동으로 0으로 초기화됨
- 결과: a=3, a=1, a=0, a=0, a=0
*/