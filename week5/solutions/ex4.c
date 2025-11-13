#include <stdio.h>

int main(int argc, char const *argv[])
{
    // With for loop
    int sum = 0;
    for (int i = 2; i <= 100; i+=3) {
        sum += i;
    }
    printf("Sum is: %d\n", sum);
    // With while loop
    int sum2 = 0;
    int i = 2;
    while (i <= 100) {
        sum2 += i;
        i += 3;
    }
    printf("Sum is: %d\n", sum2);
    // With do-while loop
    int sum3 = 0;
    int j = 2;
    do {
        sum3 += j;
        j += 3;
    } while (j <= 100);
    printf("Sum is: %d\n", sum3);
    // Extra with goto
    int sum4 = 0;
    int k = 2;
    start:
    if (k <= 100) {
        sum4 += k;
        k += 3;
        goto start;
    }
    printf("Sum is: %d\n", sum4);
    return 0;
}
