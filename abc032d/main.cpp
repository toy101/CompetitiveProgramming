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

using namespace std;
typedef long long  ll;

const long long MOD = 1e9+7;

int main(){
    ll N, W;
    cin >> N >> W;
    vector<pair<int, int>> things;
    ll v ,w;
    REP(i, 0, N){
        cin >> v >> w;
        things.emplace_back(make_pair(v, w));
    }

    vector<vector<ll>> dp(N+1, vector<ll>(W+1, 0));

    for(int i = 0; i < N; i++){
        for(int j = 0; j <= W; j++){
            if(j >= things[i].second){
                dp[i+1][j] = max(dp[i][j - things[i].second] + things[i].first, dp[i][j]);
            } else {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    p(dp[N][W]);

}