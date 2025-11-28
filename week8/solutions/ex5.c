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

    printf("Skalarno: %d\n", v1[0]*v2[0]+
                           v1[1]*v2[2]+
                           v1[2]*v2[2]);
    
    printf("Vektorno: (%d, %d, %d)\n", v1[1]*v2[2]-v1[2]*v2[1],
                                     v1[0]*v2[2]-v1[2]*v2[0],
                                     v1[1]*v2[0]-v1[0]*v2[1]);

    return 0;
}
