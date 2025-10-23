#include <stdio.h>

int main() {
    unsigned int n; 
    unsigned int pos1, pos2;
    scanf("%u, %u-%u", &n, &pos1, &pos2);
    printf("%u %u %u", n, pos1, pos2);
    n &= (__UINT32_MAX__)<<pos1; // right side
    printf(" %u", n);
    n &= (__UINT32_MAX__)>>(32-pos2); // left side
    printf(" %u", n);
    printf(" %u", (pos1>=32 || pos2>=32)*-1 + (pos1<32 && pos2<32)*n);
    return 0;
}
