/*
  Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
  
Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.

*/


#include<bits/stdc++.h>
using namespace std;

void sort012(int a[] ,int n)
{
    int i = 0, j = 0, k = n-1;
    while ( j <= k)
    {
        if(a[i] == 0)
            swap(a[i++], a[j++]);
        else if(a[i] == 1)
            j++;
         else
            swap(a[k--], a[j]);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort012(a, n);
    for(int i = 0 ;i < n; i++)
        cout<< a[i]<< " ";
        
     return 0;
}
