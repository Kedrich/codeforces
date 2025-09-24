#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long a, b; 
        scanf("%lld %lld", &a, &b);

        long long moves = (b - (a % b)) % b;  
        printf("%lld\n", moves);
    }

    return 0;
}
