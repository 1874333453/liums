#include <stdio.h>
int main()
{
	char str[]="3+4";
	int a,b,c;
	a=str[0]-'0';
	b=str[2]-'0';
	c=a+b;
	printf("%d\n",c);
	
    return 0;
}
no 2：
v0：
v0
#include<stdio.h>
int main(void)
{
	char s[] = "3+4";
	int x;
	x = s[0] - '0';
	x += s[2] - '0';
	printf("%d\n",x);

	return 0;
}
