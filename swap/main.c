#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter the two number\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a=%d & b=%d",a,b);
    getch();
}
