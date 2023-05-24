#include<stdio.h>
void fun (int ar[],int n)
{
    for (int i = 0; i < n; i++)
    {
       printf("%d ",ar[i]);
    }
    
}
int main()
{
    int ar[3]={10,20,30};
    fun(ar,3);
    return 0;
}