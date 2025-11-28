#include <stdio.h>

int main(){
    // Variant 1 without terminating zero
    // Вариант 1 без терминираща нула
    char name1[] = {'D', 'i', 'm', 'o', '\n'};
    for (size_t i = 0; i < sizeof(name1); i++)
    {
        printf("%c", name1[i]);
    }

    // Variant 2 with terminating zero
    // Вариант 2 с терминираща нула, не е за предпочитане принципно, 
    //           може да създаде известни рискове ако нямате терминираща нула
    char name2[] = {'D', 'i', 'm', 'o', '\0'};
    printf("%s\n", name2);
    
}
