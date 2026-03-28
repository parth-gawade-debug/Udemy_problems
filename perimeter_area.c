// this program calculates the perimeter and area of a rectangle.
#include<stdio.h>
int main() {
    int length,breath,area,perimeter;
    printf("enter the length of the rectangle: ");
    scanf("%d",& length);
    printf("enter the breath of the rectnagle: ");
    scanf("%d",&breath);
     area=length*breath;
     perimeter=2*(length+breath);
    printf("the area is:%d\n",area);
    printf("the perimeter is :%d",perimeter);
    return 0;
}