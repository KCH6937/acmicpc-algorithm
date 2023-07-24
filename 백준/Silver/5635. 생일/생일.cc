#include <bits/stdc++.h>
using namespace std;

int n, maxY, maxM, maxD, minY, minM, minD;
int m, y, d;
string name, maxName, minName;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    cin >> name;
    cin >> maxD;
    cin >> maxM;
    cin >> maxY;

    minName = maxName = name;
    minY = maxY;
    minM = maxM;
    minD = maxD;

    for(int i = 1; i < n; i++) {
        cin >> name;
        cin >> d;
        cin >> m;
        cin >> y;
        if(y > maxY) {
            maxY = y;
            maxM = m;
            maxD = d;
            maxName = name;
        } else if(y == maxY) {
            if(m > maxM) {
                maxM = m;
                maxD = d;
                maxName = name;
            } else if(m == maxM) {
                if(d > maxD) {
                    maxD = d;
                    maxName = name;
                }
            }
        }

        if(y < minY) {
            minY = y;
            minM = m;
            minD = d;
            minName = name;
        } else if(y == minY) {
            if(m < minM) {
                minM = m; // 이 부분을 수정했습니다.
                minD = d;
                minName = name;
            } else if(m == minM) {
                if(d < minD) {
                    minD = d;
                    minName = name;
                }
            }
        }
    }

    cout << maxName << '\n';
    cout << minName << '\n';
}