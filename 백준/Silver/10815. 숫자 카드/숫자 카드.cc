#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n;
    
    vector<int> v(10000002);
    vector<int> mv(10000002);
    
    
    for(int i = 0; i < n; i++) {
        int value;
        cin >> value;
        
        if(value < 0) {
            mv[-value] = 1;
        } else {
            v[value] = 1;
        }
        
    }
 
    cin >> m;

    for(int i = 0; i < m; i++) {
        int target;
        cin >> target;
        if(target < 0) {
            if(mv[-target] == 1) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        } else {
            if(v[target] == 1) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        
    }
}
