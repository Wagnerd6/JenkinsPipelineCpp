#include <vector>
#include "gtest/gtest.h"

#include "MathFunctions/product.h"

using namespace std;


TEST(blaTest, test1) {
    //arrange
    vector<int> vec1 = {1, 2, 3, 4};
    vector<int> vec2 = {7, 5};
    vector<int> vec3 = {9};
    //actual
    int actual1 = 24;
    int actual2 = 35;
    int actual3 = 9;
    //assert
    EXPECT_EQ (product(vec1),  actual1);
    EXPECT_EQ (product(vec2),  actual2);
    EXPECT_EQ (product(vec3),  actual3);;
}


