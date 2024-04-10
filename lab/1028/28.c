// Perfect number
# include <stdio.h>

int checkPerfect(int);

int main() {
    unsigned int n;
    printf("Enter the number to be checked as perfect or not\n");
    scanf("%d", &n);
    if (checkPerfect(n))
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);
    return 0;
}

int checkPerfect(int n) {
    int sum=0;
    printf("The factors are\n");
    for (int i=n/2; i>0; i--)
        if(n%i==0){
            printf("%d\t", i);
            sum += i;
        }
    printf("\n");
    return sum == n;
}