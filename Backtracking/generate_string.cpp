
// generate all strings of {0,1} of length k

#include<iostream>
using namespace std;

void get_string(char *s,int k)
{
	if(k==-1)
	{
		cout<<s<<endl;
		return;
	}
	s[k]='0';
	get_string(s,k-1);
	s[k]='1';
	get_string(s,k-1);
}

int main()
{
	int k;
	cin>>k;
	char str[k+1];
	str[k]='\0';
	get_string(str,k-1);
}
