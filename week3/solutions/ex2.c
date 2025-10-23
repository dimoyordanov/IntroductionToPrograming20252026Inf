#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int p = a / b;
    int r = a % b;
    printf("%d = %d.%d + %d", a, b, p, r);
    return 0;
}
