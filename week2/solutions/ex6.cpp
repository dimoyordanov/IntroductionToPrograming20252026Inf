#include <stdio.h>

int main() {
    char letter;
    float temp;
    printf( "Type letter for translation: ");
    scanf("%c", &letter);
    printf( "Type letter for tempreture: ");
    scanf("%d", &temp);
    float wrongResult = (letter!='c' && letter != 'f')*(-1000);
    float toFarenheit = (temp *1.8+ 32.0)*(letter == 'f');
    float toCelsius = (0.55*(temp - 32.0))*(letter == 'c');
    printf( "%d", wrongResult + toFarenheit + toCelsius);
    return 0;
}
    