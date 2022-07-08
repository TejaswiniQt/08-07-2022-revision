/************************************C program for string palindrome****************************************/

#include<stdio.h>


int palindrome(char *src);
int string_length(char *str);

int main()
{
	char src[100];
	int flag;
	printf("Enter the string:\n");
	scanf("%[^\n]%*c",src);
	flag = palindrome(src);
	if(flag == 0)
		printf("The entered string %s is palindrome\n",src);
	else
		printf("The string is not palindrome\n");
	return 0;
}

int palindrome(char *src)
{
	int i,length,flag=0;
	length = string_length(src);
	for(i=0;i<length;i++)
	{
		if(src[i] != src[length-1-i])
		{
			flag = 1;
			break;
		}
	}
	return flag;
}

int string_length(char *str)
{
	int len=0;
	while(*str)
	{
		len++;
		str++;
	}
	return len;
}


