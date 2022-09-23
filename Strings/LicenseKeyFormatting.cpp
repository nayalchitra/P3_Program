/*
Given a string S that consists of only alphanumeric characters and dashes. The string is separated into N + 1 groups by N dashes. Also given an integer K. 

We want to reformat the string S, such that each group contains exactly K characters, except for the first group, which could be shorter than K but
still must contain at least one character. Furthermore, there must be a dash inserted between two groups, and you should convert all lowercase letters to uppercase.

Return the reformatted string.


S = "5F3Z-2e-9-w", K = 4
Output: "5F3Z-2E9W"

S = "2-5g-3-J", K = 2
Output: "2-5G-3J"

*/

#include<bits/stdc++.h>
using namespace std;

string ReFormatString(string S, int K)
{
    string noDash = "";
    for(int i = 0 ;i < S.length(); i++)
        if(S[i] == '-'){}
        else 
            noDash += toupper(S[i]);
    
    int i = noDash.length()-1;
    string ans= "";
    while( i >= 0)
    {
        int count = 0;
        while(i >= 0 and count < K)
        {
            ans += noDash[i];
            count++;
            i--;
        }
        if(i>=0)
            ans += '-';
    }
    reverse(ans.begin(), ans.end());
    return ans;

}

int main()
{
    string str;
    cin >> str;
    int K;
    cin >> K;
    cout << ReFormatString(str, K);
}

