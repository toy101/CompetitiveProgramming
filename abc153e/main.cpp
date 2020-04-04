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
    int H, N;
    cin >> H >> N;
    vector<pair<int, int>> skills;
    int a, b;
    int max_a = 0;
    REP(i, 0, N){
        cin >> a >> b;
        // first -> ダメージ, second -> コスト
        skills.emplace_back(make_pair(a, b));
        if(max_a <= a){ max_a = a;}
    }

    vector<int> dp(H + max_a, 0);

    for(int i = 1; i < H + max_a; i++){
        vector<int> tmp(N, INF);
        for(int j = 0; j < N; j++){
            if(i >= skills[j].first) {
                tmp[j] = dp[i - skills[j].first] + skills[j].second;
            }
        }
        dp[i] = *min_element(tmp.begin(), tmp.end());
    }

    int ans = INF;
    for(int i = H; i < H + max_a; i++){
        if(ans >= dp[i]){ ans = dp[i];}
    }
    p(ans);

}