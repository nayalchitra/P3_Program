/*
  We are given an integer array asteroids of size N representing asteroids in a row. For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.
Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are of same size, both will explode. Two asteroids moving in the same direction will never meet.
 

Example 1:

Input:
N = 3
asteroids[ ] = {3, 5, -3}
Output: {3, 5}
Explanation: The asteroid 5 and -3 collide resulting in 5. The 5 and 3 never collide.
Example 2:
Input:
N = 2
asteroids[ ] = {10, -10}
Output: { }
Explanation: The asteroid -10 and 10 collide exploding each other.
Your Task:
You don't need to read input or print anything. Your task is to complete the function asteroidCollision() which takes the array of integers asteroids and N as parameters and returns the state of asteroids after all collisions.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<int> asteroidCollision(int N, vector<int>&asteroids)
    {
      stack<int> stk;
      for(int i = 0; i < N; i++)
      {
        bool flag = false;
        while(!stk.empty() and stk.top() >0 and asteroids[i] > 0){
          if(stk.top() >= abs(asteroids[i]){
            flag = true;
            if(stk.top() == abs(asteroids[i]))
              stk.pop();
            break;
          }
          else{
            stk.pop();
          }
        }
        if(!flag)
          stk.push(asteroids[i]);
      }
      vector<int> ans;
      while(!stk.empty()){
          ans.push_back(stk.top());
          stk.pop();
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        vector<int> asteroids(N);
        for(int i = 0; i < N; i++)
          cin >> asteroids[i];
        Solution obj;
        vector<int> ans = obj.asteroidCollision(N,asteroids);
        for(auto &it : ans)
          cout << it << ' ';
        cout <<endl;
    }
    return 0;
}
