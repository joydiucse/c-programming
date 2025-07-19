#include <stdio.h>

int main(){
    int n;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    int i;
    int num[n];

    for(i=0; i<n; i++){
        printf("\nEnter number %d: ", i+1);
        scanf("%d", &num[i]);
    }

    int min = num[0];
    int max = num[0];

    for(i=1; i<n; i++){
        if(num[i] > max){
            max=num[i];
        }
        if(num[i] < min){
            min = num[i];
        }
    }

    printf("\nMaximum Number: %d\n", max);
    printf("Minimum Number: %d", min);
    return 0;
}
