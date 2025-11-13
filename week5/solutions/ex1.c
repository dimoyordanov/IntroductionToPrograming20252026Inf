#include <stdio.h>

int main()
{
    double harmonic_sum = 0.0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        harmonic_sum += 1.0 / i;
    }
    printf("Harmonic sum is: %f\n", harmonic_sum);
    return 0;
}
