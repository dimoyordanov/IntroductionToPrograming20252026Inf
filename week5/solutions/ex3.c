#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    do {
        scanf("%d", &n);
        if (n <= 0) {
            printf("Error, no such triangle exist, try again\n");
        }
    } while (n <= 0);
    for (int i = 0; i < n; i++) {
        for (size_t j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        
        printf("*");
        for (int j = 1; j <= i*2-1; j++) {
            printf(" ");
        }
        if (i != 0)
            printf("*");
        printf("\n");
    }
    for (size_t i = 0; i < n*2+1; i++)
    {
        printf("*");
    }
    printf("\n");
    
    return 0;
}
