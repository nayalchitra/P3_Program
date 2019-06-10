// program to reverse a string

#include<iostream>
#include<string.h>
using namespace std;


void reverseString(char c[])
{
	int i,j;
	int len=strlen(c);
	char temp;
	for(i=0,j=len-1;i<j;i++,j--)
	{
		temp=c[i];
		c[i]=c[j];
		c[j]=temp;
	}
	cout<<c;
}

int main()
{
	char c[100];
	gets(c);
	
	reverseString(c);
}
