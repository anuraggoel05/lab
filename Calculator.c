#include<stdio.h>
void main()
{

printf("Enter two no.");
scanf("%d",&a);
scanf("%d",&b);
printf("enter your choice 1.for add,2 for substract ,3 for multiply, 4 for divide");
scanf("%d",&ch);
if(ch==1)
{
printf("addition of two no",a+b);
}
else if(ch==2)
{
printf("difference of two no ",a-b);
}
else if(ch==3)
{
printf("product of no",a*b);
}
else if (ch==4)
{
printf("division of two no=",a/b);
}
else 
{
printf("wrong choice");
}

}

