// Sum of two matrices
# include <stdio.h>

int main() {
    int m, n, A[10][10], B[10][10];
    printf("Enter the order of the matrix:\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of matrix A:\n");
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            scanf("%d", &A[i][j]);
    printf("Enter the elements of matrix B:\n");
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            scanf("%d", &B[i][j]);
    printf("The sum of the two matrix is\n");
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++)
            printf("%d\t", A[i][j]+B[i][j]);
        printf("\n");
    }
    return 0;
}

