#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int *arr;
    int n,sum=0;
    //number of array elements
    scanf("%d",&n);
    //dynamic memory allocation
    arr = (int*)malloc(n * sizeof(int));
    //taking array elements from user and storing in arr dynamically
    for(int i=0; i<n; ++i) {
        scanf("%d",&arr[i]);
    }
    //adding array elemnets
    for(int i=0; i<n; ++i) {
        sum = sum + arr[i];
    }
    //sum of array elements
    printf("%d",sum);

    return 0;
}