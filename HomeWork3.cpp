#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;

    vector<int> array;
    int check[n + 1];
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        array.push_back(x);
        check[i] = 0;
    }

    for (int i = 0; i < n - 1; i++) {
        if (check[i] == 0) {
            for (int j = i + 1; j < n; j++) {
                if (check[j] == 0 && array[i] == array[j]) {
                    check[i] = 1;
                    check[j] = 1;
                }
            }
        }
    }

    for (int i = 0; i< n; i++) {
        if (check[i] == 0) {
            cout << array[i];
        }
    }

    return 0;
}