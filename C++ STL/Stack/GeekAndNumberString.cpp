/*
Geek has a string Sof size Nconsisting of characters from '0'to '9'. 
He wants to minimise the length of the string. In each minimising 
operation, geek can remove any two consecutive characters if they are of
 the form {"12", "21", "34", "43", "56", "65", "78", "87", "09", "90"}.
Find the minimum possible length of the string after applying minimising 
operations. 
 

Example 1:

Input: 
N = 5 
S = "12213"
Output: 1
Explanation: Geek can get the string of 
length 1 in two minimising operation,
In 1st operation Geek will remove "12" 
from "12213" then Geek left with "213"
In 2nd operation Geek will remove "21" 
from "213" then Geek left with "3"
 

Example 2:

Input: 
N = 4
S = "1350"
Output: 4
Explanation: Can't remove any character.

Your Task:  
You don't need to read input or print anything. Complete the functionminLength() which takes N and S as input parameters and returns the the minimum possible length of the string.



*/

#include<bits/stdc++.h>
using namespace std;

int minLength(string str, int n)
{
    stack<char>stk;
    for(int i = 0 ;i < n; i++)
        stk.push(str[i]);
    string s = "";
    s += stk.top();
    stk.pop();
    while(!stk.empty())
    {
        string temp = "";
        temp += s[0];
        temp += stk.top();
        if(temp == "12" || temp == "21" || temp == "34" || 
        temp == "43"|| temp == "56" || temp == "65"|| 
        temp == "90" || temp == "09")
        {
            s.erase(0,1);
            stk.pop();
        }
        else{
            s = stk.top() + s;
            stk.pop();
        }
    }
    return s.length();
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout<< minLength(s, n)<< "\n";
    }
}