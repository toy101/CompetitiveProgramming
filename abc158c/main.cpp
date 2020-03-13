#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

    int a_max = (a + 1) / 0.08;
    int a_min = ceil(a / 0.08);

    for(int i = a_min; i < a_max; i++){
        if(int(i*0.1) == b){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}

