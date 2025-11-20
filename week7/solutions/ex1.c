#include <stdio.h>

double harmonic_sum(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    double result = harmonic_sum(n);
    printf("Harmonic sum is: %f\n", result);
    return 0;
}
