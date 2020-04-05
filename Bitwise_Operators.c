#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    
    int a,b,max_AND,max_OR,max_XOR;
    long long int p=0,q=0,r=0;
    for(int i=1; i<n; i++) {
        a = i;
        for(int j=i+1; j<=n; j++) {
            b = j;
            max_AND = a&b;
            max_OR = a|b;
            max_XOR = a^b;
            if(max_AND < k && max_AND >p)
                p = max_AND;
            if(max_OR < k && max_OR >q)
                q = max_OR;
            if(max_XOR < k && max_XOR >r)
                r = max_XOR;
        }
    }
    printf("%lld\n%lld\n%lld",p,q,r);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
