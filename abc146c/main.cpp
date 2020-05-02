#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <iomanip>
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

ll a, b, x;

int getDigit(ll n){
    int digit = 1;
    while (n/10 > 0){
        digit++;
        n = n/10;
    }
    return digit;
}

bool isOK(ll n){
    return a * n + b * getDigit(n) <= x;
}

ll binary_serach(){
    ll top = 1000000001;
    ll under = 0;
    ll tmp;
    while (top - under > 1){
        tmp = (top + under) / 2;
        if(isOK(tmp)){
            under = tmp;
        } else {
            top = tmp;
        }
    }

    return under;
}

int main(){
    cin >> a >> b >> x;
    ll ans = binary_serach();
//    ll ans = getDigit(110);
//    ll ans = ll(isOK(10));
    p(ans);
}
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <iomanip>
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

ll a, b, x;

int getDigit(ll n){
    int digit = 1;
    while (n/10 > 0){
        digit++;
        n = n/10;
    }
    return digit;
}

bool isOK(ll n){
    return a * n + b * getDigit(n) <= x;
}

ll binary_serach(){
    ll top = 1000000001;
    ll under = 0;
    ll tmp;
    while (top - under > 1){
        tmp = (top + under) / 2;
        if(isOK(tmp)){
            under = tmp;
        } else {
            top = tmp;
        }
    }

    return under;
}

int main(){
    cin >> a >> b >> x;
    ll ans = binary_serach();
//    ll ans = getDigit(110);
//    ll ans = ll(isOK(10));
    p(ans);
}
