#include <stdio.h>

int main()
{
    int num;
    printf("Type your number: ");
    scanf("%d", &num);
    printf("%d%d%d", num%10, (num/10)%10, (num/100)%10);
    return 0;
}
