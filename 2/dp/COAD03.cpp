#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test;
    cin >> test;
    while(test--){
       int n;
       cin >> n;
       vector<ll> v(n+1,0);
       for(int i=n-1;i>0;i--){
            if(2*i <=n)
                v[i] = min(1+v[i+1],2+v[2*i]);
            else 
                v[i] = v[i+1]+1;
       }
       cout << v[1]+1 << '\n';
    }
    return 0;
}