#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int tc;
    cin >> tc;
    
    stack<int> st;
    
    while(tc--) {
        string cmd;
        cin >> cmd;
        
        if(cmd == "push") {
            int v;
            cin >> v;
            st.push(v);
        } else if(cmd == "pop") {
            if(st.empty()) {
                cout << -1 << "\n";
            } else {
                cout << st.top() << "\n";
                st.pop();
            }
        } else if(cmd == "size") {
            cout << st.size() << "\n";
        } else if(cmd == "empty") {
            if(st.empty()) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else { // top
            if(st.empty()) {
                cout << -1 << "\n";
            } else {
                cout << st.top() << "\n";
            }
        }
    }
}