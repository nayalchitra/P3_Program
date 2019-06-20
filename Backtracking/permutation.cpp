// permutation

#include<iostream>
#include<string.h>
using namespace std;

void permute(char a[],int len,int r)
{
	int i;
	if(len==r)
	{
		cout<<a<<endl;
		return;
	}
	for(i=len;i<r;i++)
	{
		swap(a[len],a[i]);
		permute(a,len+1,r);
		swap(a[len],a[i]);
	}
}

int main()
{
	char str[]="abc";
	int len=strlen(str);
	permute(str,0,len);
}
