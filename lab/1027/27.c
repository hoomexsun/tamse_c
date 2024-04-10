// Combination using Factorial
# include <stdio.h>

int factorial(int);

int main() {
    unsigned int n, r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    if (n>r){
        int nCr = factorial(n)/(factorial(r)*factorial(n-r));
        printf("%dC%d = %d.\n", n, r, nCr);
    }
    return 0;
}

int factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    int fact=1;
    for (int i=n; i>1; i--)
        fact *= i;
    return fact;
}