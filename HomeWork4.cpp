#include <iostream>

using namespace std;

int main() {
    int n, L, R; cin >> n >> L >> R;

    vector<int> array;
    for (int i = 1; i < 1000; i++) {
        // int x; cin >> x;
        array.push_back(i);
    }

    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            for (int k = j + 1; k < n - 1; k++) {
                for (int l = k + 1; k < n; k++) {
                    int x = (((array[i]&array[j])|array[k])^array[l]);
                    if (x >= L && x <=R) {
                        cout << i << " " << j << " " << k << " " << l;
                    }
                }
            }
        }
    }

    return 0;
}