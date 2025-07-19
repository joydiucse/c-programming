#include <stdio.h>

int main() {
    int arr[10] = {54, 67, 35, 16, 28, 38, 61, 42, 60, 22};
    int prime = 0;

    for (int i = 0; i < 10; i++) {
        int num = arr[i];
        int isPrime = 1;

        if (num <= 1) {
            isPrime = 0;
        } else {
            for (int j = 2; j < num; j++) {
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
