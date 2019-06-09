#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double angle;
	int i,n;
	cin>>angle>>n;
	angle*=M_PI/180;
	double term=angle;
	double sum=0;
	//cout<<term<<" ";
	sum+=term;
	for(i=2;i<=n;i++)
	{
		//term=term*angle*angle*(-1)/((2*i-1)*(2*i-2));
		term=term*(angle*angle*(-1)/((2*i-1)*(2*i-2)));
		//cout<<term<<" ";
		sum+=term;
	}
	//cout<<endl<<endl;
	cout<<sum;
}
