#include <iostream>
#include <typeinfo>
#include <array>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
    const int size = 3;
    array<string, size> arr;
    for (int i = 0; i < size; i++) {
        arr[i] = *argv[i+1];
    }
    cout << "argc: " << argc << " *argv: " << *argv << " last: " << *argv[3] << " begin: " << arr.begin() << " end: " << arr.end() << endl;
    sort(arr.begin(), arr.end());
    for (auto e : arr) {
        cout << e << " ";
    }
}
