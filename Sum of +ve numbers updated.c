#include <stdio.h>

int main() {
    int n;
    int num[n];
    int positive = 0;

    printf("How many numbers do you want to check? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n; i++) {
        if (num[i] > 0) {
            positive += num[i];
        }
    }
    printf("Sum of positive numbers are: %d\n", positive);
    return 0;
}
