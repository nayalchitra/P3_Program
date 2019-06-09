// lon(N!) program

#include<iostream>
#include<math.h>
using namespace std;

double sumlog(int n)
{
	if(n==0)
		return 0;
	return ((sumlog(n-1)+log(n))/2.303);
}

int main()
{
	int n;
	cin>>n;
	cout<<sumlog(n);
}
