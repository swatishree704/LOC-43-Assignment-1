#include<stdio.h>
void main()
{
    int num1,num2,ch;

    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);

    printf("Menu:\n1)ADD\n2) SUB\n3) MUL\n4) DIV \nENTER YOUR CHOICE: "); 
        scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("ADD:%d",(num1+num2));
        break;
        case 2:
        printf("SUB %d",(num1-num2));
        break;
        case 3:
        printf("Multi:%d",(num1*num2));
        break;
        case 4:
        printf("DIV: %d",(num1/num2));
        break;

        default:
        break;

    }
}