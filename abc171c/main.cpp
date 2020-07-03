#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <iomanip>
#include <string>
#include <map>
#include <queue>
#include <list>

#define REP(i, n ,N) for(ll i = (n); i < (N); i++)
//#define RREP(i, n ,N) for(ll i = (N-1); i >= (n); i--)
#define p(s) cout<<(s)<<endl
#define p2(a, b) cout<<(a)<<" "<<(b)<<endl
#define vint vector<int>
#define INF 1e9

using namespace std;
typedef long long  ll;

char IntToChar(int n){
    char tmp = 'a' + n;
    return tmp;
}

#define Z 26

int main(){

    ll n;
    cin >> n;

    string ans;

    while(n >= Z){
        n = n -1;
        ans += IntToChar(n%Z);
        n = n/Z;
    }

    if(n != 0){ans += IntToChar(n-1);}
    reverse(ans.begin(), ans.end());

    p(ans);

    return 0;
}

