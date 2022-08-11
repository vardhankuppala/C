#include<stdio.h>
int main(){
    int a,b;
    a = 10;
    b = 20;
    printf("values before swapping %d\t%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("values after swapping%d\t%d\n",a,b);
    return 0;
}