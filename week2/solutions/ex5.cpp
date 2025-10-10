#include <iostream>

int main()
{
    char letter;
    printf("Type your letter: ");
    scanf("%d", &letter);
    bool isFirstName = (letter == 'd') || (letter == 'D');
    int isLetter = (letter >= 'A' && letter <= 'Z')*2 + (letter >= 'a' && letter <= 'z');
    printf("%d\n", isFirstName*10 + isLetter);
    return 0;
}
