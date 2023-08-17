#include <iostream>
#include <vector>
#include <list>

using namespace std;

const int SIZE = 10;

struct Node {
    int key;
    string value;
    int nextIndex;
};

int hashFunction(int key) {
    return key % SIZE;
}

void insert(vector<list<Node>>& hashTable, int key, string value) {
    int index = hashFunction(key);

    if (hashTable[index].empty()) {
        hashTable[index].push_back({key, value, -1});
    } else {
        list<Node>& currList = hashTable[index];
        auto itr = currList.begin();

        while (itr != currList.end() && itr->nextIndex != -1 && hashFunction(itr->nextIndex) == index) {
            itr++;
        }

        int nextIndex = -1;
        if (itr != currList.end()) {
            nextIndex = itr->nextIndex;
        }

        currList.insert(itr, {key, value, nextIndex});
        if (itr != currList.end()) {
            itr->nextIndex = index + 1;
        }
    }
}

void printTable(vector<list<Node>>& hashTable) {
    for (int i = 0; i < SIZE; i++) {
        cout << i << ": ";
        for (auto node : hashTable[i]) {
            cout << node.key << " (" << node.value << ") ";
        }
        cout << endl;
    }
}

int main() {
    vector<list<Node>> hashTable(SIZE);

    int numItems;
    cout << "Enter number of items to insert: ";
    cin >> numItems;

    for (int i = 0; i < numItems; i++) {
        int key;
        string value;

        cout << "Enter key for item " << i + 1 << ": ";
        cin >> key;

        cout << "Enter value for item " << i + 1 << ": ";
        cin >> value;

        insert(hashTable, key, value);
    }

    cout << "Hash Table: " << endl;
    printTable(hashTable);

    return 0;
}
