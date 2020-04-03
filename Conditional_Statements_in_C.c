int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }
    
    char arr_string[10][15]={
        "Greater than 9","one","two",
        "three","four","five","six",
        "seven","eight","nine"
    };
    if (n>9) {
        n=0;
    }
    printf(arr_string[n]);
    return 0;
}