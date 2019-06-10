// program to check if a string is palindrome or not

#include<iostream>
using namespace std;

bool check_palindrome(char c[],int n)
{
	int i,j;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		if(c[i]!=c[j])
			return false;
	}
	return true;
}

int main()
{
	int n;
	cin>>n;
	char c[n];
	cin>>c;
	
	if(check_palindrome(c,n))
		cout<<"Palindrome";
	else
		cout<<"Not Palindrome";
}
