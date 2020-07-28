/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int sumofdigits(int num);
int main()
{
    int num,sum;
    printf("enter any number");
    scanf("%d",&num);
    sum=sumofdigits(num);
    printf("sum of digits of %d=%d",num,sum);
    return 0;
}
int sumofdigits(int num)
{
    if(num==0)
            return 0;
    return ((num%10)+sumofdigits(num /10));
}
