#include <vector>

#include "product.h"

using namespace std;

int product(vector<int> numbers) {
    int result = 1;
    for(const int &number : numbers)
        result *= number;
    return result;
}

