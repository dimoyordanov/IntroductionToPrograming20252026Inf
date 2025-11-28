#include <stdio.h>

int main(){
    const size_t size = 10;
    int main[size];
    for (size_t i = 0; i < size; i++)
    {
        //first way with pointer arithmetic
        scanf("%d", main+i);
        //first way without pointer arithmetic
        //scanf("%d", &(main[i]));
    }
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", main[size-i-1]);
    }
}
