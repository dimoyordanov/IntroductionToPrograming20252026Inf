#include <stdio.h>

int main(int argc, char const *argv[])
{
    char op;
    int a, b;
    scanf ("%d %c %d", &a, &op, &b);
    switch (op)
    {
    case '+':
        printf("%d", a+b);
        break;
    case '-':
        printf("%d", a-b);
        break;
    case '*':
        printf("%d", a*b);
        break;
    case '/':
        printf("%f", ((double)a)/b);
        break;
    case 'm':
        printf("%d", (a>b)?a:b);
        break;
    case 'i':
        printf("%d", (a>b)?b:a);
        break;
    default:
        printf("Error no such operation");
    }
    return 0;
}
