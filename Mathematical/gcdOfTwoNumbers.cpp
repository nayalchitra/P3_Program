

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b ==0)
        return a;
    return gcd(b, a%b);
}

int main(){

    int a = 3, b= 6;
    cout << gcd(a,b);
}
