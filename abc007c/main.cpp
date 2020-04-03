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
    int r, c;
    cin >> r >> c;
    int sy, sx;
    cin >> sy >> sx;
    int gy, gx;
    cin >> gy >> gx;
    string tmp;
    vector<string> field(r);
    REP(i, 0, r){
        cin >> tmp;
        field[i] = tmp;
    }

    vector<vector<int>> past (r, vector<int>(c, -1));

    int vx[] = {0, 1, 0, -1};
    int vy[] = {1, 0, -1, 0};

    queue<pair<int, int>> bfs;

    bfs.push(make_pair(sy, sx));
    past.at(sy - 1).at(sx - 1) = 0;
    int x, y, next_x, next_y, distance;
    while(not bfs.empty()){
        pair<int, int> posi = bfs.front();
        y = posi.first;
        x = posi.second;
        distance = past.at(y - 1).at(x - 1);
        REP(i, 0, 4){
            next_y = y + vy[i];
            next_x = x + vx[i];
            if(field.at(next_y-1).at(next_x-1) == '.' and past.at(next_y - 1).at(next_x - 1) == -1){
                past.at(next_y - 1).at(next_x - 1) = distance + 1;
                bfs.push(make_pair(next_y, next_x));
            }
        }
        bfs.pop();
    }

    p(past.at(gy-1).at(gx-1));

}