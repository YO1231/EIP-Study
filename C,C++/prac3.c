#include <stdio.h>

void ary(int a[])
{
    int temp;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4 - i; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}

int main()
{
    int a[] = {85, 75, 50, 100, 95};
    ary(a);
    for (int i = 0; i < 5; i++)
        printf("%d", a[i]);
}

/*
정답: 50708595100
- 버블 정렬
- printf("%d", a[i]); -> 띄어쓰기 없이 출력!
*/
