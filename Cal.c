#include<stdio.h>
int main() 
{
     int a,b,sum,div,mul,per,mod,avg,sub;

    printf("Enter the first number   :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);  
    sum=a+b;
    sub=a-b;
    div=a/b;
    mul=a*b;
    mod=a%b;
    per= div*100;
    avg=sum/b;
    printf("\n the sum of %d and %d is = %d", a,b ,sum );
    printf("\n the sub of %d and %d is = %d", a,b, sub );
    printf("\n the div of %d and %d is = %d", a,b, div );
    printf("\n the avg of %d and %d is = %d", a,b ,avg );
    printf("\n the per of %d and %d is = %d", a,b ,per );
    printf("\n the mul of %d and %d is = %d", a,b ,mul );
    printf("\n the mod of %d and %d is = %d", a,b ,mod );
    return 0;
    getch();
} 
