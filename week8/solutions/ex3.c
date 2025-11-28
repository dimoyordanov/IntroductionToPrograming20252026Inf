#include <stdio.h>

char maxChar(char a, char b){
    return a>b?a:b;
}

char minChar(char a, char b){
    return a<b?a:b;
}

int main() {
    char symbols[127] = {0};
    const size_t enter = 6;
    char j;
    for (size_t i = 0; i < enter; i++)
    {
        scanf("%c\n", &j);
        symbols[j]++;
    }
    int average = 0;
    char max = 0;
    char min = 127;

    for (size_t i = 0; i < 128; i++)
    {
        if (symbols[i] > 0) {
            max = maxChar(max, i);
            min = minChar(min, i);
            average += symbols[i]*i;
        }
    }
    printf("Statistics:\n\
            \tAverage: '%c'\n\
            \tMax: '%c'\n\
            \tMin: '%c'", 
            (char)(average/enter), 
            max,
            min);
    
    return 0;
}
