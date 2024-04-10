// Multiplication table for a given integer
# include <stdio.h>

int main() {
    unsigned int n;
    printf("Enter the integer: ");
    scanf("%d", &n);
    printf("Multiplication Table for %d:\n", n);
    for (int i=1; i<=10; i++)
        printf("%d x %d = %d\n", n, i, n*i);
    return 0;
}

