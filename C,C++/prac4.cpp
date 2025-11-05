#include <iostream>

enum Value{
    a,
    b,
    c = 7,
    d};

int main()
{
    Value value;
    value = d;
    std::cout << value;
}

/*
정답: 8
- `a`: 첫 번째 멤버이고 초기값이 없으므로 0
- `b`: 이전 값(a=0) + 1 = 1
- `c = 7`: 명시적으로 7 할당
- `d`: 이전 값(c=7) + 1 = 8
- `value = d;`는 value에 8을 할당
- `std::cout << value;`는 8 출력
*/