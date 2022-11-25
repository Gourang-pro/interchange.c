#include<stdio.h>
#include<conio.h>

int main()
{
        int a,b,temp;

            printf("the first number:-->");
            scanf("%d",&a);

            printf("the second number:-->");
            scanf("%d",&b);
            
            temp=a;
            a=b;
            b=temp;

            printf("--1st no %d\n --2nd no %d",a,b);
        
return 0;


}
