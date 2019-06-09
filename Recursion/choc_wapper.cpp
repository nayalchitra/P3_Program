// chocolate wrapper problem

#include<iostream>
using namespace std;

int recwrap(int noofchoc,int wrapper)
{
	if(noofchoc<wrapper)
		return 0;
	int newno = noofchoc/wrapper;
	
	return newno+recwrap(newno+noofchoc%wrapper,wrapper);
}

int f(int money,int price,int wrapper)
{
	int noofchoc=money/price;
	return noofchoc+recwrap(noofchoc,wrapper);
}

int main()
{
	int money,price,wrapper;
	cin>>money>>price>>wrapper;
	
	cout<<f(money,price,wrapper);
}
