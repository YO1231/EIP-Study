#include <stdio.h>
int main()
{
    struct ary
    {
        char name[10];
        int age;
    } a[] = {{"Kim", 28}, {"Lee", 38}, {"Park", 42}, {"Choi", 31}};

    struct ary* p;
    p = a;
    p++;
    printf("%s\n", p->name);
    printf("%d\n", p->age);
}

/* 정답:
Lee
38
- p = a;       // p는 a[0]을 가리킴
- p++;         // p는 a[1]을 가리킴 (다음 구조체로 이동)
*/