#include<bits/stdc++.h>
using namespace std;



int sum = 0;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	vector<pair<int, int>> v;
	
	for(int i = 1; i <= 8; i++) {
		int score;
		cin >> score;
		
		v.push_back({score, i});
	}
	
	sort(v.begin(), v.end(), greater<>()); // 내림차순 
	
	for(int i = 0; i < 5; i++) {
		sum += v[i].first;
	}
	
	cout << sum << '\n';
	
	vector<int> v2;
	
	for(int i = 0; i < 5; i++) {
		v2.push_back(v[i].second);
	}
	
	sort(v2.begin(), v2.end());
	
	for(int i = 0; i < 5; i++) {
		cout << v2[i] << " ";
	}
}
