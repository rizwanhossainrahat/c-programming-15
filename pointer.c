#include<stdio.h>
int main()
{
    int x=10;
    int *ptr=&x;
    // x=200;
    *ptr=200;
    // x -> *ptr same
    printf(" x er value %d\n",x);
    printf(" x er value %d\n",*ptr);

    // printf(" x er adrress %p\n",&x);
    // printf(" ptr er value %p\n",ptr);
    // printf(" ptr er address %p\n",&ptr);
    return 0;
}