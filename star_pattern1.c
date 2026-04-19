// in this program we will print the star pattern like this
//    *
//   ***
//  *****
// *******
#include <stdio.h>
int main() {
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" "); // this will print the space before the star
        }
        for(j=1;j<=2*i-1;j++){
            printf("*"); // this will print the star
        }
        printf("\n"); // this will move to the next line after printing the star
    }
    return 0;
}