#include<stdio.h>
int main()
{
    double x=5.25;
    double *ptr=&x;
    double *ptr2=ptr;
    *ptr2=56.23;
    // *ptr=10.56;

    printf("x er value %0.2lf\n",x);
    printf("x er value %0.2lf\n",ptr);
    printf("x er value %0.2lf\n",ptr2);
    return 0;
}