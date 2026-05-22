#include<stdio.h>
int main ()
{
    int n , i , prime = 1;
    printf(" Enter the no.: ");
    scanf("%d",&n);
    if(n<=1)
    {
      prime = 0;
    }
    else
    {
       for(i=2;i<n;i++)
       {
        if(n%i==0)
        {
            prime=0;
        }
       }
    }
    if(prime==1)
    {
        printf("the no. is prime ");
    }
    else
    {
      printf("the no. is not  prime ");
    }
    return 0;
}