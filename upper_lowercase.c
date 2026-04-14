#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') { // so here it is comparing the ASCII values 
        //if instead of ch>='A' we would have written ch>=65 then also  it would have worked because the ASCII value of 'A' is 65 and the ASCII value of 'Z' is 90
        printf("The character '%c' is an uppercase letter.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a lowercase letter.\n", ch);
    } else {
        printf("The character '%c' is not an alphabetic letter.\n", ch);
    }
    return 0;   
}