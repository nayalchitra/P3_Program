// generate string of {0,1} in lexicographic order

#include<iostream>
using namespace std;

void generate_string(char *s,int start,int end)
{
	if(start==end)
	{
		s[start]='\0';
		cout<<s<<endl;
		return;
	}
	s[start]='0';
	generate_string(s,start+1,end);
	s[start]='1';
	generate_string(s,start+1,end);
}

int main()
{
	int k;
	cin>>k;
	char str[k+1];
	generate_string(str,0,k);
}
