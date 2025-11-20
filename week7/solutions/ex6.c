#include <stdio.h>


int reg; // MNOGO LOSHA PRAKTIKA DA IMA GLOBALNI PROMENLIVI NO ZA UPROSTYAVANE NA KODA E PO LESNO
int last_result;

int replace_with_register(int a, char op, int b){
    char new_op;
    int replace_choice;
    printf("Which number to replace with register? (1 or 2): ");
    scanf(" %d", &replace_choice);
    printf("Enter operation to perform with register: ");
    scanf(" %c", &new_op);
    if (replace_choice == 1) {
        return calculate(reg, new_op, b);
    } else if (replace_choice == 2) {
        return calculate(a, new_op, reg);
    } else {
        printf("Error invalid choice\n");
        return 0;
    }
}

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
    case 's':
        reg = last_result;return reg;
    case '%': {
        return replace_with_register(a, op, b); break;
    }
    case '&':
        return a & b; break;
    case '|':
        return a | b; break;
    case '<<':
        return a << b; break;
    case '>>':
        return a >> b; break;
    case '~':
        return ~a; break;
    default:
        printf("Error no such operation\n");
        return 0;
    }
}

void graphingCalculator() {
   int func;
    scanf("%d", &func);
    for (int y = 20; y >= -20; y--) {
        for (int x = -10; x <= 10; x++) {
            int value;
            switch (func) {
                case 0:
                    value = 1;
                    break;
                case 1:
                    value = x;
                    break;
                case 2:
                    value = x * x / 10; // Scale down for visibility
                    break;
                case 3:
                    value = x * x * x / 100; // Scale down for visibility
                    break;
                default:
                    printf("Error: Invalid function choice\n");
                    return 1;
            }
            if (value == y) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    char op;
    reg = 0;
    int a, b;
    printf("Do you want a graphing calculator? (y/n): ");
    scanf(" %c", &op);
    if (op == 'y' || op == 'Y') {
        graphingCalculator();
        return 0;
    } else {
        scanf ("%d %c %d", &a, &op, &b);
        int result = calculate(a, op, b);
        printf("%d\n", result);
    }
    return 0;
}
