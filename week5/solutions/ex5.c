#include <stdio.h>


int main(){
    int counter = 0;
    while (1) {
        char c;
        scanf("%c", &c);
        switch(c){
            case 'p':
                counter++; break;
            case 'm':
                counter--; break;
            case 'n':
                counter *= -1; break;
            case 'e': {
                printf("Enter new counter value: ");
                scanf("%d", &counter);
                break;
            }
            case 'q':
                printf("Final counter value: %d\n", counter);
                return 0;
        }
        printf("Current counter value: %d\n", counter);
    }


}
