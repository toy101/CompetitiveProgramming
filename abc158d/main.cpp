#include <iostream>
#include <stdio.h>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main(){

    deque<string> s;
    string first_s;
    int n;
    cin >> first_s >> n;

    s.push_front(first_s);

    bool reverse_flag = true;

    int t, f;
    string c;
    for(int i = 0; i < n; i++){
        cin >> t;
        if(t == 1){ reverse_flag = not reverse_flag;}
        else{
            cin >> f >> c;
            if(reverse_flag){
                if(f == 1){s.push_front(c);} //c + s
                else{s.push_back(c);}//s + c
            } else {
                if(f == 1){s.push_back(c);}
                else{s.push_front(c);}
            }
        }
    }

    string ans;
    for(int i = 0; i<s.size(); i++){
        ans += s[i];
    }

    if(not reverse_flag){reverse(ans.begin(), ans.end());}

    cout << ans << endl;

    return 0;
}

