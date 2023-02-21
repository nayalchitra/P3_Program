/*

you are given an array of strings arr of size n. you have to find out if it is possible to make a
palindromic string by concatenating the strings in any order. Provided that all the strings given in the array are equal length.

Input:
n = 4
arr = {"djfh", "gadt", "hfjd", "tdag"}
Output:
YES
Explanation:
You can make the string "djfhgadttdaghfjd", by concatenating the given strings which is a palindrome.


Input:
n = 3
arr = {"jhjdf", "sftas", "fgsdf"}
Output:
NO
Explanation:
You can't make a palindromic string with this strings.


*/

#include<bits/stdc++.h>
using namespace std;

bool makePalindrome(int n, vector<string> &arr)
{
    map<string,int> mp;
    for(int i = 0; i < n; i++)
        mp[arr[i]] ++;
    for(int i =0 ; i< n; i++)
    {
        string str = arr[i];
        reverse(str.begin(),str.end());
        if(mp.find(str) != mp.end())
        {
            mp[str]--;
            if(mp[str] == 0)
                mp.erase(str);
        }
        else{
            if(str != arr[i])
                return false;
        }
    }

    if(mp.size() == 0)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<string>arr(n);
    for(int i = 0; i <n ;i++)
        cin >> arr[i];
    if(makePalindrome(n, arr))
        cout << "YES"<< endl;
    else 
        cout << "NO"<< endl;
}