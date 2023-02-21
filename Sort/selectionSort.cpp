#include<bits/stdc++.h>
using namespace std;


void selectionSort(int arr[], int n){
    int min_ind = 0;
    for(int i = 0;  i < n; i++)
    {
        min_ind = i;
        for(int j = i+1; j < n; j ++)
        {
            if(arr[j] < arr[min_ind])
                min_ind = j;
        }
        swap(arr[i],arr[min_ind]);
    }
}

int main(){
    int n = 10;
    int arr[] = {10,9,8,7,6,5,4,3,2,1};

    selectionSort(arr,n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}