// Transpose of matrix
# include <stdio.h>

int main() {
    int m, n, A[10][10];
    printf("Enter the order of the matrix A:\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of matrix\n");
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            scanf("%d", &A[i][j]);
    printf("The transpose of matrix A is\n");
    for (int j=0; j<n; j++) {
        for (int i=0; i<m; i++)
            printf("%d\t", A[i][j]);
        printf("\n");
    }
    return 0;
}

