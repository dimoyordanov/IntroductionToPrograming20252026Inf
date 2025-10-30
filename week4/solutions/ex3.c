#include <stdio.h>

int main(int argc, char const *argv[])
{
    double k1,n1,k2, n2;
    scanf("y = %fx + %f", &k1, &n1);
    scanf("y = %fx + %f", &k2, &n2);
    double x = (n2-n1)/(k1-k2);
    double y = (x*k1+n1);
    printf("Point of meeting is: (%d,%d)", x, y);
    return 0;
}
