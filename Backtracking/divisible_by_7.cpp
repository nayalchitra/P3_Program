// print all k digits which are divisible by 7

#include<iostream>
#include<string.h>
using namespace std;


int string_to_num(char *s,int start,int len,int num)
{
	if(start>len)
		return num;
	num=num*10+(s[start]-'0');
	return string_to_num(s,start+1,len,num);	
}


bool isDivisible(char *s)
{
	int len=strlen(s);
	int num=0;
	if(string_to_num(s,0,len-1,num)%7==0)
		return true;
	return false;
}

void generate_string(char *s,int start,int end)
{
	if(start==end)
	{
		s[start]='\0';
		if(isDivisible(s))
		{
			cout<<s<<endl;
		}
		return;
	}
	for(int i=1;i<=9;i++)
	{
		s[start]='0'+i;
		generate_string(s,start+1,end);
	}
}

int main()
{
	int k;
	cin>>k;
	char s[k+1];
	generate_string(s,0,k);
}
