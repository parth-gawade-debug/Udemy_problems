//this program finds the cost of x mangoes if the price for a dozen is given.

#include <stdio.h>
int main() {
    int ruppees,paise,cost,quantity;
    float cost_dozen;

    printf("cost of a dozen mangoes=%f, quantity of mangoes= %d\n",cost_dozen,quantity);
    scanf("%f %d",&cost_dozen,&quantity);
    cost=((cost_dozen*100/12)+quantity*0.5);
    ruppees=cost/100;
    paise=cost%100;
    printf("number of mangoes=%d\n",quantity);
    printf("cost  is %d ruppees and %d paise\n",ruppees,paise);
    return 0;
}