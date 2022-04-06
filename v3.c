#include<stdio.h>
int main()
{
	char str[]="2*2/4*1/1*2*3/2";
	int a,i;
	int c=str[0]-'0';
	for(i=1;i<14;i++)
	{
		if(str[i]=='*')
		{
			a=str[i+1]-'0';
			c=c*a;
			i++;
		}
		else if (str[i]=='/')
		{
			a=str[i+1]-'0';
			c=c/a;
			i++;
		}
	}
		printf("%d\n",c);
	return 0;
}
no 3：
v3：
3
#include<stdio.h>
int main(void)
{
	char s[] = "4+1*2-2/2+1+1";
	int i,x;
	x = s[0] - '0';
	for(i = 1;s[i] != '\0';i++)
	{
		if(s[i + 2] == '*')
		{
			if(s[i] == '+')
			{
				i++;
				x += (s[i] - '0')*(s[i+2] - '0');
				i = i + 2;
			}
			else if(s[i] == '-')
			{
				i++;
				x = x - (s[i] - '0')*(s[i+2] - '0');
				i = i + 2;
			}
		}
		else if(s[i + 2] == '/')
		{
			if(s[i] == '+')
			{
				i++;
				x += (s[i] - '0')/(s[i+2] - '0');
				i = i + 2;
			}
			else if(s[i] == '-')
			{
				i++;
				x = x - (s[i] - '0')/(s[i+2] - '0');
				i = i + 2;
			}
		}
		else if(s[i + 2] == '+')
		{
			if(s[i] == '+')
			{
				i++;
				x += (s[i] - '0')+(s[i+2] - '0');
				i = i + 2;
			}
			else if(s[i] == '-')
			{
				i++;
				x = x - (s[i] - '0')+(s[i+2] - '0');
				i = i + 2;
			}
		}
		else if(s[i + 2] == '-')
		{
			if(s[i] == '+')
			{
				i++;
				x += (s[i] - '0')-(s[i+2] - '0');
				i = i + 2;
			}
			else if(s[i] == '-')
			{
				i++;
				x = x - (s[i] - '0')-(s[i+2] - '0');
				i = i + 2;
			}
		}
	}	
	printf("%d\n",x);
	return 0;
}
