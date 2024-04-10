// Factorial of a number using recursive function
# include <stdio.h>

int factorial(int);

int main() {
    unsigned int n;
    printf("Enter the number to find its factorial: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d.\n", n, factorial(n));
    return 0;
}

int factorial(int n) {
    return n==0? 1: n*factorial(n-1);
}