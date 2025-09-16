#include <stdio.h>

int main(void)
{
    int k, r;
    scanf("%d %d", &k, &r);

    for(int n = 1; n <= 10; n++)
    {
        int total_cost = n * k;

        if (total_cost % 10 == 0)
        {
            printf("%d\n", n);
            return 0;
        }

        if ((total_cost - r) % 10 == 0 && (total_cost - r) >= 0)
        {
            printf("%d\n", n);
            return 0;
        }
    }

    return 0;
}