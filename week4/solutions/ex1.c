#include <stdio.h>

int main() {
    int a;
    char c;
    scanf("%c %d", &c, &a);
    if (c == 'h') { 
        printf("Height is: %d", a);
    } else if (c == 'w') {
        printf("Width is: %d", a);
    } else {
        printf("Error no such command");
    }
}
