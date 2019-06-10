// convert the input string fro lowercase  to upper case

#include<iostream>
#include<string.h>
using namespace std;

void convertLowerToUpper(char c[])
{
	for(int i=0;i<strlen(c);i++)
	{
		if(c[i]>='a' && c[i]<='z' )
			c[i]=c[i]+'A'-'a';
	}
	cout<<c;
}


int main()
{
	
	char c[20];
	cin>>c;
	convertLowerToUpper(c);
}
	
  
