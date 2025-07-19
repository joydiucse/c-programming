#include <stdio.h>
int main() {
    int n;
    int num;
    int prime = 0;
    int i, j;

    printf("Enter the number of data points you want to enter: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        int isPrime = 1;

        if (num <= 1) {
            isPrime = 0;
        } else {
            for (j = 2; j < num; j++) {
                if (num % j == 0) {
                    isPrime = 0;
                }
            }
        }
        if (isPrime == 1) {
            prime++;
        }
    }
    printf("Amount of Prime Numbers: %d\n", prime);

    return 0;
}
