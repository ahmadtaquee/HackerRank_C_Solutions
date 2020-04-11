#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];   
    int arr[10] = {0};
    scanf("%[^\n]%*c",s);
    for(int i=0; i<strlen(s); i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            arr[s[i] - '0']++;
        }
    }
    for(int i=0; i<10; i++) {
        printf("%d ",arr[i]);
    }
    

    return 0;
}
