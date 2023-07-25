#include<bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n;
int sum = 0;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < n; i++) {
    	for(int j = 0; j <= i; j++) {
    		sum += arr[j];
		}
	}
	
	cout << sum;
}