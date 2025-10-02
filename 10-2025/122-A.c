#include <stdio.h>

int isLucky(int x) {
    while (x > 0) {
        int d = x % 10;
        if (d != 4 && d != 7) return 0;
        x /= 10;
    }
    return 1; 
}

int main(void) {
    int n;
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        if (isLucky(i) && n % i == 0) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}
