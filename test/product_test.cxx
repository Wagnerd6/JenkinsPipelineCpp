#include <vector>
#include "gtest/gtest.h"

#include "MathFunctions/product.h"

using namespace std;


TEST(productTest, successful) {
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


TEST(productTest, fixed) {
    //arrange
    vector<int> vec = {1, 2, 3, 4, 5};
   
    //actual
    int actual = 100;
    //assert
    EXPECT_EQ (product(vec),  actual);
}

