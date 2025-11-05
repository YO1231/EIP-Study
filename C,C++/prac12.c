#include <stdio.h>
main()
{
    int i = 5, j = 5, k = 20;
    i /= j;
    j -= i;
    k %= j;
    printf("%d, %d, %d\n", i, j, k);
}

/*
정답: 1, 4, 0

i 1
j 4
k 0
*/