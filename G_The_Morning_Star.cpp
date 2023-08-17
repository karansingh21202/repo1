#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<pair<int, int>> points(n);
        for (int i = 0; i < n; ++i) {
            cin >> points[i].first >> points[i].second;
        }
        
        sort(points.begin(), points.end());
        
        ll count = 0;
        int maxY = points[0].second;
        
        for (int i = 1; i < n; ++i) {
            if (points[i].second > maxY) {
                maxY = points[i].second;
            } else {
                ++count;
            }
        }
        
        cout << count << "\n";
    }

    return 0;
}
