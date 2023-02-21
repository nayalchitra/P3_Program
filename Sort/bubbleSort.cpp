
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j+1] < arr[j])
                swap(arr[j],arr[j+1]);
        }
    }
}

int main(){
    int n = 10;
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    
    bubbleSort(arr, n);
    for(int i = 0 ; i < n; i++)
        cout << arr[i]<<" ";
}