#include <stdio.h>
int main() {
    int num,digit,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0){
        digit=num%10; // this will give the last digit of the number
        reverse=reverse*10+digit; // this will add the last digit to the reverse
        num=num/10; // this will remove the last digit of the number
    }
    printf("Reverse of the number is: %d",reverse);
    return 0;

}