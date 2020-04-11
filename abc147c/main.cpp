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
#define INF 1e9
#define vint vector<int>

using namespace std;
typedef long long  ll;

const long long MOD = 1e9+7;

int a[20];
int x[20][20];
int y[20][20];

int bit_counter(int x) {
    if(x == 0) return 0;
    return bit_counter(x >> 1) + (x & 1);
}

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        for(int j=1; j <= a[i]; j++){
            cin >> x[i][j] >> y[i][j];
        }
    }

    int ans = 0;
    //bit全探索
    for(int bits=1; bits < (1 << n); bits++){
        bool flag = true;
        for(int i=1; i <= n; i++){
            if(!(bits & (1 << (i-1)))) continue;
            // i番目の人(ビット)が1(正直のである)とするとき
            for(int j=1; j<=a[i]; j++){
                // i番目の人の証言が全て正しいか確認
                // i番目の人(ビット)が1について
                    // (bits & (1 << (i-1))と同じ(ビットを戻しる)
                if(((bits >> (x[i][j]-1)) & 1) ^ y[i][j]) flag = false;
                                        //　排他的論理和
                                        // 証言と一致していないならFalse
            }
        }
        if(flag) ans = max(ans, bit_counter(bits));
    }

    cout << ans << endl;
}