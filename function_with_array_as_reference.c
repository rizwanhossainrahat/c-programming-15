#include<stdio.h>
void fun(char *ar)
{
     ar[0]='G';
}

// void fun(int *ar,int n)
// {
//      ar[1]=500;
// }
int main()
{
    char ar[20]="HELLO";
    fun(ar);
    printf("%s",ar);

    // int ar[5]={10,20,30,40,50};
    // fun(ar,5);
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ",ar[i]);
    // }
    
    return 0;
}