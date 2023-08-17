#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        if (mp.count(arr[i])) {
            cout << mp[arr[i]]+1 << endl;
            break;
        } else {
            mp[arr[i]] = i;
        }
    }

    return 0;
}
