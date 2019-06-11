/*
program to print the character with maximum occurrence

Input : raman
Output : a
*/

#include<iostream>
#include<string.h>
#define MAX 26
using namespace std;


int main()
{
	char c[100];
	cin>>c;
	int count[MAX]={0};
	int i,index,len=strlen(c);
	int max=0;
	char res;
	for(i=0;i<len;i++)
	{
		index=c[i]-'a';
		count[index]++;
		if(max<count[index])
		{
			max=count[index];
			res=c[i];
		}
	}
	cout<<res;
}
