#include<stdio.h>

int main(){
    int n = 6,  i = 0, j;
    int arr[6] = {5,6,4,4, 4, 3};

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                printf("diplicate: %d \n", arr[i]);
                return 0;
            }
        }
    }
    return 0;
}