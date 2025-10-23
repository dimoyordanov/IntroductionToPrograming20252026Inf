#include <stdio.h>

int main(){
    int num;
    int pos;
    scanf("%d %d", &num, &pos);
    int res = (pos>=32 || pos < 0)*-1 + (num & (1 << pos))*((pos > 0) && (pos < 32));
    printf("%d", res);
    return 0;
}
