#include <iostream>
#include <vector>

#include "MathFunctions/product.h"

using namespace std;


int main(int argc, char* argv[]) {
    int const size = argc-1;   
    int arr[size];

    for(int i = 0; i < size; i++) {
        arr[i] = *argv[i + 1] - '0';
    }  
    vector<int> vec (arr, arr + sizeof(arr) / sizeof(arr[0]));
    
    cout << "product: " << product(vec) << endl;
}


