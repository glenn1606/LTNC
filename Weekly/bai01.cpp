#include <iostream>
#include <vector>

using namespace std;
int d[1000005] = {0};
int main() {
    int n; cin >>n;
    int a[n];
    for(auto &x: a){
        cin >> x;
        d[x]++;
    }
    int k; cin >>k;
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(a[i]+a[j]==k && (d[a[i]] >0) && (d[a[j]] >0) ) {
                cout << a[i] << ' ' << a[j] << endl;
                d[a[i]] =0; d[a[j]] =0;
            }
        }
    }
    return 0;
}
