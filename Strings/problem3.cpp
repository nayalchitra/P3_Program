//Program to count number of words in a string

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char c[100];
	gets(c);
	
	int i,count=1;
	for(i=0;i<strlen(c);i++)
	{
		if(c[i]==' ')
			count++;
	}
	cout<<count;
}
