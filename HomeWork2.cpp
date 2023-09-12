#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> array;
    for (int i = 0; i < 10; i++) {
        int x; cin >> x;
        array.push_back(x);
    }
    sort(array.begin(), array.end());

    cout << array[0] << " " << array[9];

    return 0;
}