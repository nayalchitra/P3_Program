/* Write a program to print the longest numeric substring

Input : This345is78a1num12string
Output: 345

*/

#include<iostream>
using namespace std;

string LongestNumericSubstring(string s)
{
	int i;
	int c=0,max=0;
	string res,s1="";
	for(i=0;i<s.length();i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			c++;
			s1+=s[i];
			
		}
		else
		{
		if(c>max)
			{
				
				max=c;
				c=0;
				res=s1;
				s1="";
			}
		}
			//cout<<max<<" "<<res<<endl;
	}
	return res;
}

int main()
{
	string s;
	cin>>s;
	cout<<LongestNumericSubstring(s);
}
