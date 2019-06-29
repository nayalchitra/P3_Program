/* Number of substrings divisible by 6 in a string of integers

Given a tring consisting of integers 0 to 9. The task is to count the numbers of substrings which when convert 
into integer are divisible by 6.Substring does not contain leading zeros
*/

#include<iostream>
using namespace std;

bool check_divisible(string s)
{
	int i;
	long long num=0;
	for(i=0;s[i]!='\0';i++)
	{
		num=num*10+(s[i]-'0');
	}
	if(num%6==0)
		return true;
	return false;
}

int main()
{
	string s;
	cin>>s;
	int i,j;
	int count=0;
	for(j=1;j<=s.length();j++)
	{
		for(i=0;(i+j)<=s.length();i++)
		{
			string s1 = s.substr(i,j);
			if(s1[0]=='0' && s1[1]!='\0');
			else
			{
				if(check_divisible(s1))
				{
					cout<<s1<<" ";
					count++;
				}
					
			}
		}
	}
	cout<<endl<<"count = "<<count<<endl;
}
