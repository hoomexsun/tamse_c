// N odd natural numbers and their sum
# include <stdio.h>

int main() {
    unsigned int n, sum=0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The first %d odd natural numbers are: ", n);
    for (int i=1; i<=2*n; i+=2) {
        printf("%d\t", i);
        sum += i;
    }
    printf("\nThe sum of first %d odd natural numbers is %d\n", n, sum);
    return 0;
}

