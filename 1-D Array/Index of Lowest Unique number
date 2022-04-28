
// Program to print the index of lowest unique number in an array


#include <iostream>
#include<map>
using namespace std;

int LowestUniqueBid(int arr[],int n)
{
    map<int,int>mp;
	for(int i = 0; i< n; i++)
	{
	    mp[arr[i]]++;
	}
	int ele = -1;
	for(auto i = mp.begin(); i!=mp.end(); i++)
	{
	    if(i->second == 1){
	        ele = i->first;
	        break;
	    }
	}
	
	for(int i = 0; i< n; i++)
	{
	    if(arr[i] == ele)
	        return i;
	}
	return -1;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0 ;i <n; i++)
	    cin>>arr[i];
	
	cout<<LowestUniqueBid(arr, n);
	
	
	return 0;
}
