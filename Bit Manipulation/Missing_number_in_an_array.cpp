// using Bit manipulation

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n = 5;
  int arr[] = {1,2,3,5};
  
  int x1 = 0, x2 = 0, x3= 0 ;
  for(int i = 0; i < n -1; i++)
  {
    x1 = x1 ^ arr[i];
  }
  for(int i =1; i <=n; i++)
    x2 = x2 ^ i;
  x3 = x2 ^ x1;
  
  cout<< "misisng number is " << x3<<endl;
  
}


/*

// Method 2: using mathematics
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n = 5;
  int arr[] = {1,2,3,5};
  
  int sum = (n*(n+1))/2;

  for(int i = 0; i < n-1; i++)
    sum -= arr[i];
  
  cout<< "misisng number is " << sum <<endl;
  
}
*/