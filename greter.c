#include<stdio.h>
int main()
{int a,b,c;
printf("Enter a number");
scanf("%d %d %",&a,&b,&c);
if(a>b)
printf("first number is larger");
else if(b>c)
printf("second number is larger");
else
    printf("third number is larger");
return 0;
}

