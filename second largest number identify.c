#include <stdio.h>

int main() {
    int n;
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    int num[n];
    int i;

    for (i = 0; i < n; i++) {
        printf("\nEnter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    int largest;
    int secondLargest;

    if (num[0] > num[1]) {
        largest = num[0];
        secondLargest = num[1];
    } else {
        largest = num[1];
        secondLargest = num[0];
    }

    for (i = 2; i < n; i++) {
        if (num[i] > largest) {
            secondLargest = largest;
            largest = num[i];
        } else if (num[i] > secondLargest & num[i] < largest) {
            secondLargest = num[i];
        }
    }
    printf("The second largest number is: %d\n", secondLargest);
    return 0;
}
