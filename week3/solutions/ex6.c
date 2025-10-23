#include <stdio.h>

int main(int argc, char const *argv[])
{
    int h1, m1, h2, m2;
    printf("Enter the two hours: ");
    scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);
    int h = (h1 <= h2)*(h1 - h2) + (h1 > h2)*(h2+24-h1) - (m2 < m1);
    int m = (m2 >= m1)*(m2-m1) + (m2 < m1)*(m2+60-m1);
    printf("Time: %d:%d", h, m);
    return 0;
}
