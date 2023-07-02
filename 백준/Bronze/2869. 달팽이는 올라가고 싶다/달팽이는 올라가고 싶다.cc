#include<bits/stdc++.h>

using namespace std;

int a, b, v;
int cnt = 0;

int main(void) {
    cin >> a >> b >> v;
    
    cnt = (v-b)/(a-b);
    
    if((v-b)%(a-b) != 0) {
    	cnt++;
	}
        
    if(a >= v) {
    	cout << 1;
	} else {
		cout << cnt;
	}
    
}