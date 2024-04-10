// Bubble sort
# include <stdio.h>

int main() {
    int n, arr[100];
    printf("Enter the number of elements to be sorted\n");
    scanf("%d", &n);
    printf("Enter the value of the list\n");
    for (int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if (arr[i]>arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    printf("The sorted list in ascending order:\n");
    for (int i=0; i<n; i++)
        printf("%d\t", arr[i]);
    printf("\n");
    return 0;
}

