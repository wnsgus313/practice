int main(int argc, const char * argv[])
{
    char arr[101];
    int i = 0;
    int n = 0;
    int sum = 0;
    
    scanf("%d", &n);
    scanf("%s", &arr);
    
    for(i=0; i<n; i++){
        sum += arr[i] - '0';
    }
    
    printf("%d\n", sum);
    
    return 0;
}
