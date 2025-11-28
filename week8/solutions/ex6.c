#include <stdio.h>

int main(int argc, char const *argv[])
{
    const size_t size = 3;
    int v1[size] = {0};
    int v2[size] = {0};
    for (size_t i = 0; i < size; i++) {
        scanf("%d", v1+i);
    }
    
    for (size_t i = 0; i < size; i++) {
        scanf("%d", v2+i);
    }
    printf("a+b=(");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d, ", v1[i]+v2[i]);
    }
    printf(")\n");

    printf("Product: \n");
    for (size_t i = 0; i < size; i++)
    {
        printf("|");
        for (size_t j = 0; j < size; j++)
        {
            printf("%d, ", v1[i]*v2[i]);
        }
        printf("|\n");
    }
    
    return 0;
}
