#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    
    cin >> n;

    vector<pair<int, int>> v(n);
    vector<string> vs(n);
    
    
    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> vs[i];
        v[i].second = i;
    }
    
    
    sort(v.begin(), v.end());
    
    for(int i = 0; i < n; i++) {
        cout << v[i].first << " " << vs[v[i].second] << "\n";
    }
    
}