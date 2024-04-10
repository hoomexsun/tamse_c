// Sum of numbers between 9 and 300 divisible by 7 but not by 63
# include <stdio.h>

int main() {
    unsigned int sum=0;
    for (int i=9; i<=300; i++)
        if (i%7==0 && i%63!=0)
            sum += i;
    printf("Sum of integers between 9 & 300 that are divisible vy 7 but not 63 is %d\n", sum);
    return 0;
}

