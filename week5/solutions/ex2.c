#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 1) {
        printf("Not prime\n");
        return 0;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            printf("Not prime\n");
            return 0;
        }
    }
    printf("Prime\n");
    return 0;
}
