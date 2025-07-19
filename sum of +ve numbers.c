#include <stdio.h>

int main() {
    int n;
    int num;
    int prime = 0;

    printf("How many numbers do you want to check? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        int isItPrime = 1;

        if (num <= 1) {
            isItPrime = 0;
        }
        else {
            for (int divisor = 2; divisor < num; divisor++) {
                if (num % divisor == 0) {
                    isItPrime = 0;
                }
            }
        }
        if (isItPrime == 1) {
            prime++;
        }
    }
    printf("There are %d prime numbers!\n", prime);
    return 0;
}

