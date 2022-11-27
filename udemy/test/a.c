#include<stdio.h>
int main()
{
    int a,b,c;
    char op;
    printf("enter value of a and b is=");
    scanf("%d \n %d",&a,&b);
    printf("enter any character from '+','-','*','/','%%',");
    scanf("%c",&op);  //+
    if(op==+)
    {
        c=a+b;
        printf("sum of %d and %d is %d",c);
    }
    if(op=='-')
    {
        c=a-b;
        printf("subtract of %d and %d is %d",c);
    }
    if(op=='*')
    {
        c=a*b;
        printf("multiply of %d and %d is %d",c);
    }
    if(op=='/')
    {
        c=a/b;
        printf("division of %d and %d is %d",c);
    }
    if(op=='%')
    {
        c=a%b;
        printf("remainder of %d and %d id %d",c);
    }
    return 0;
}