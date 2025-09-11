#include <stdio.h>

int main()
{
    int k, n, w;
    int total = 0, borrow = 0;

    scanf("%d %d %d", &k, &n, &w);

    for(int i = 1; i <= w; i++)
    {
        total += i * k;
    }

    if(total > n)
        borrow = total - n;
    else
        borrow = 0;

    printf("%d\n", borrow);

    return 0;
}
