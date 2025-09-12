#include <stdio.h>

int main(void)
{

    int n;
    scanf("%d", &n);

    int bill = 0;
    int denominations[] = {100, 20, 10, 5, 1};

    for(int i = 0; i < 5; i++)
    {
        bill += n / denominations[i];
        n %= denominations[i];
    }

    printf("%d\n", bill);

    return 0;
}