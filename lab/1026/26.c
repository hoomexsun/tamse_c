// Count number of vowels in a given string
# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main() {
    char s[100];
    int n = 0;
    printf("Enter the string\n");
    fgets(s, sizeof(s), stdin);
    for (int i=0; i<strlen(s); i++) {
        switch(tolower(s[i])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                n++;
        }
    }
    printf("The number of vowels in the string is %d.\n", n);
    return 0;
}

