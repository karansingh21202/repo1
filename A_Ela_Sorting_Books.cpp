#include<bits/stdc++.h>
using namespace std;

char mex(vector<char> lst) {
    for (int i = 0; i < 26; i++) {
        char c = 'a' + i;
        if (find(lst.begin(), lst.end(), c) == lst.end()) {
            return c;
        }
    }
    return 'a';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string books;
        cin >> books;
        sort(books.rbegin(), books.rend());
        for (int i = 0; i < k; i++) {
            vector<char> multiset(books.begin() + i, books.end());
            multiset.resize(n / k);
            cout << mex(multiset);
        }
        cout << endl;
    }
    return 0;
}
