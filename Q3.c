#include<stdio.h>
int main(){
    int num,sum=0,b;
    printf("Enter a number::");
    scanf("%d",&num);
    do{
        b=num%10;
        sum=sum+b;
        num=num/10;
    }while(num!=0);
    printf("sum is%d",sum);
    return 0;
}