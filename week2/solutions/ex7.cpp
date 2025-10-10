#include <stdio.h>

int main() {
    int number;
    printf( "Enter n");
    scanf("%d", &number);
    printf( "Sum is: %d", (number+1)*number/2);
    printf( "Sum of power of 2 is: %d", number*(number+1)*(2*number+1)/6);
    return 0;
}
    