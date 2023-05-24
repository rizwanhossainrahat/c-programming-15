#include<stdio.h>
void fun (int x)
{
    x=100;
    printf("fun er x ar value %d\n",x);
}
int main()
{
    int x=10;
    fun(x);
    printf("main er x ar value %d\n",x);
    
    return 0;
}