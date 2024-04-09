# include <stdio.h>

int swapByReference(int*, int*);

int main() {
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d%d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swapByReference(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}

int swapByReference(int* m, int* n) {
    int temp = *m;
    *m = *n;
    *n = temp;
}