// Linear Search
# include <stdio.h>

int main() {
    int n, arr[100], key, found=-1;
    printf("Input size of array: ");
    scanf("%d", &n);
    printf("Input elements in array: ");
    for (int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Element to search is: ");
    scanf("%d", &key);
    for (int i=0; i<n; i++)
        if (arr[i] == key)
            found = i;
    if (found == -1)
        printf("Element %d is not found", key);
    else
        printf("Element %d is found at location %d", key, found+1);
    return 0;
}

