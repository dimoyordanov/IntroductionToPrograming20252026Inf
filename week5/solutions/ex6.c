#include <stdio.h>

int main() {
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
    return 0;
}
