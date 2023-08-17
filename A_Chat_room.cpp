#include <iostream>
using namespace std;
string a, b = "hello";
int j = 0, k = 0;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[j]) {
            j++;
            k++;
            
            if (k == 5) {
                break;
            }
        }
    }
    if (k == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}