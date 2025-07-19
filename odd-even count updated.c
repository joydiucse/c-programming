#include <stdio.h>

int main() {
    int n;
    int odd = 0;
    int even = 0;

    printf("How many numbers do you want to input? ");
    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);

        if (num[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    printf("\nOdd numbers: %d\n", odd);
    printf("Even numbers: %d\n", even);

    return 0;
}
