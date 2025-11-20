#include <stdio.h>

int calculate(int a, char op, int b) {
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return (double)a / b;
    default:
        printf("Error no such operation\n");
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    char op;
    int a, b;
    scanf ("%d %c %d", &a, &op, &b);
    int result = calculate(a, op, b);
    printf("%d\n", result);
    return 0;
}
