#include <stdio.h>

int main() {
    int n, k;
    int factorial_n = 1, factorial_n_minus_k = 1;

    scanf("%d%d", &n, &k);

    // Check if input is valid for n choose k
    if (n >= k && k >= 0) {
        // Calculate factorial of n and factorial of (n-k)
        for (int i = 1; i <= n; i++) {
            factorial_n *= i;
            if (i <= (n - k)) {
                factorial_n_minus_k *= i;
            }
        }
        // Print the result of n choose k
        printf("%d\n", factorial_n / factorial_n_minus_k);
    } else {
        printf("Invalid input: n should be greater than or equal to k, and k should be non-negative.\n");
    }

    return 0;
}




