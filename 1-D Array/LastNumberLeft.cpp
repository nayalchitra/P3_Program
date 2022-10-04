// Ravi and shantanu plays a game alternately. the write N random numbers in a sheet of paper.in each turn, a player selects and number and 
//erases it from the sheet.Ravi makes the first attempt.this continues until theere is only one number left on the sheet.
// ravi wants to minimise the last number that would be lft on the sheet while shantanu wants to maximise it.


#include<bits/stdc++.h>
using namespace std;

int LastNumber(int arr[], int n)
{
    sort(arr,arr+n);
    
    int i =0 , j= n-1;
    bool ravi = 1;
    while(i < j)
    {
        if(ravi)
        {
            j--;
            ravi = !ravi;
        }
        else{
            i++;
            ravi  = !ravi;
        }
        
    }
    return arr[i];
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i <n; i++)
        cin>>arr[i];
        
    cout<<LastNumber(arr, n);
    return 0;
}
