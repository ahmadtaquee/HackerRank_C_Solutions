int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	char arr[11][15]={
          "one","two","three",
          "four","five","six",
          "seven","eight","nine",
          "even","odd"
    };
    int index;
    for(int i = a; i <= b; i++) {
        index = i <= 9 ? i - 1 : 9 + i % 2;
        printf("%s\n", arr[index]);
    }
    return 0;
}