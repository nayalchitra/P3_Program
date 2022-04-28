// write a program to check if the number formed by the array element is divisble by 11
/*
  ex: n= 4
  arr = [1,2,3,4];
  freq = [2,3,4,1]
  
  number formed =1122233334
  if this number is divisible by 11 or not

*/


#include<bits/stdc++.h>
using namespace std;

bool DivisibleBy11(int arr[],int freq[] ,int n)
{
    for(int i= 0; i< n; i++)
    {
        if(freq[i]%2 == 0)
            freq[i] = 0;
        else
            freq[i] = freq[i]%2;
    }
    int num= 0;
    for(int i = 0; i< n; i++)
    {
        if(freq[i] != 0)
            num = num*10+arr[i];
    }
    return (num%11 == 0);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int freq[n];
    for(int i =0 ;i <n; i++)
        cin>>arr[i];
    for(int i = 0; i< n; i++)
        cin>>freq[i];
    
   cout<<DivisibleBy11(arr, freq,n);
   
   return 0;
    
}
