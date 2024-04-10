// Count occurence of particular character in a given string
# include <stdio.h>
# include <string.h>

int main() {
    char s[100], c;
    int n=0;
    printf("Enter the string\n");
    fgets(s, sizeof(s), stdin);
    printf("Enter the character to be counted\n");
    scanf("%c", &c);
    for (int i=0; i<strlen(s); i++)
        if (s[i] == c)
            n++;
    printf("The number of %c in the given string is %d.\n", c, n);
    return 0;
}

