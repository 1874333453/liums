#include<stdio.h>
int main()
{
	char str[]="2+2*3+2/2-1";
	int A,a,b,c,d;
	a=str[0]-'0';
	b=(str[2]-'0')*(str[4]-'0');
	c=(str[6]-'0')/(str[8]-'0');
	d=str[10]-'0';
	A=a+b+c-d;
	
	printf("%d\n",A);
	return 0;
	}
no 2：
v2：
2
#include<stdio.h>
int main(void)
{
	char s[] = "1*2/2*2*4*4";
	int i,x;
	x = s[0] - '0';
	for(i = 1;s[i] != '\0';i++)
	{
		if(s[i] == '*')
		{
			i++;
			x = x*(s[i] - '0');
		}
		else if(s[i] == '/')
		{
			i++;
			x = x/(s[i] - '0');
		}
	}	
	printf("%d\n",x);
	return 0;
}
