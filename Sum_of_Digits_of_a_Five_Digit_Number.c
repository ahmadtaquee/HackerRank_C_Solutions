int main() {
	
    int n;
    int sum=0;
    scanf("%d", &n);
    while (n>0) {
        int temp = n;
        n = n%10;
        sum = sum + n;
        n = temp/10;
    }
    printf("%d",sum);


    return 0;
}