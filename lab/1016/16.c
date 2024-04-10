// Factorial of a number
# include <stdio.h>

int main() {
    unsigned int n, fact = 1;
    printf("Enter the number to find the factorial:\n");
    scanf("%d", &n);
    if(n > 1)
        for (int i=1; i<=n; i++)
            fact *= i;
    printf("The factorial of %d is %d\n", n, fact);
    return 0;
}

