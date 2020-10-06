#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int high, weigh, k_num;
    cin >> high >> weigh >> k_num;

    vector<string> masu(high);
    for (int i = 0; i < high; ++i) {
        cin >> masu[i];
    }

    int ans = 0;
    for (int h_bit = 0; h_bit < (1<<high); ++h_bit) {
        for (int w_bit = 0; w_bit < (1<<weigh); ++w_bit) {
            int cnt = 0;
            for (int h = 0; h < high; ++h) {
                // その列を塗り潰したかどうか
                if(h_bit & (1 << h)){
                    continue;
                }
                for (int w = 0; w < weigh; ++w){
                    // その行を塗り潰したかどうか
                    if(w_bit & (1 << w)){
                        continue;
                    }
                    if(masu[h][w] == '#') cnt++;
                }
            }
            if(cnt == k_num) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
