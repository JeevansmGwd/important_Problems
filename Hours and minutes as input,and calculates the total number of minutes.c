#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter hours and minutes\n");
    scanf("%d%d",&a,&b);
    c=a*60+b;
    //converting hours in minutes
    printf("total minute=%d",c);
}
