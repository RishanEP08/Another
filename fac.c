#include <stdio.h>
int fac(int n);
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Factorial of a number is : %d",fac(num));
}
int fac(int n)
{
    if(n==0)
      return 1;
    else
      return(n*fac(n-1));
}