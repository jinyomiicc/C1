
int main(void)
{
    int n;
    int i;
    int y;

    printf("출력하고 싶은 단 :");
    scanf("%d", &n);

    while(i<=9){
        y = n*i;
        printf("%d*%d= y\n", n, i);
        i++;
    }
    return 0;
}