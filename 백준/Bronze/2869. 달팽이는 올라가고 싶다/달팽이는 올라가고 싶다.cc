#include<bits/stdc++.h>

using namespace std;

int a, b, v;
int cnt = 0;

int main(void) {
    cin >> a >> b >> v;
    
    cnt = (v-a)/(a-b) + 1;
    
    if((v-a)%(a-b) != 0) {
    	cnt++;
	}
        
    if(a >= v) {
    	cout << 1;
	} else {
		cout << cnt;
	}
    
}