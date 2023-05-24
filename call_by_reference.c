#include<stdio.h>
void fun (int *p)
{   
    *p=200;
    printf("main er x ar value %d\n",*p);
}
int main()
{
    int x=10;
    fun(&x);
    printf("x er x ar value %d\n",x);
    
    return 0;
}