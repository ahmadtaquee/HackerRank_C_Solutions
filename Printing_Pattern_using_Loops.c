#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,min;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            min = i < j ? i : j;
            printf("%d",n-min+1);
        }
        for(j=n-1; j>=1; j--) {
            min = i < j ? i : j;
            printf("%d",n-min+1);
        }
        printf("\n");
    }
    for(i=n-1; i>=1; i--) {
        for(j=1; j<=n; j++) {
            min = i < j ? i : j;
            printf("%d",n-min+1);
        }
        for(j=n-1; j>=1; j--) {
            min = i < j ? i : j;
            printf("%d",n-min+1);
        }
        printf("\n");
    }

    return 0;
}