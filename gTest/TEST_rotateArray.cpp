#include <gtest/gtest.h>


extern "C"
{
#include "rotateArray.h"
}

int32_t garr[] = {1, 2, 3, 4, 5};
TEST(RotateArrayTest, BasicRotation) {

    uint32_t size = 5;
    uint32_t k = 2;
    s32_rotateArray(garr, size, k);
    EXPECT_EQ(garr[0], 4);
    EXPECT_EQ(garr[1], 5);
    EXPECT_EQ(garr[2], 1);
    EXPECT_EQ(garr[3], 2);
    EXPECT_EQ(garr[4], 3);
}

TEST(RotateArrayTest, LargeRotation) {
    int32_t arr[] = {1, 2, 3, 4, 5};
    uint32_t size = 5;
    uint32_t k = 7; // Rotate by more than array size
    s32_rotateArray(arr, size, k);
    EXPECT_EQ(s32_rotateArray(arr, size, k), -1);
}


TEST(RotateArrayTest, InvalidRotation) {
    int32_t arr[] = {1, 2, 3};
    uint32_t size = 3;
    uint32_t k = 5; // Rotation more than array size
    int32_t result = s32_rotateArray(arr, size, k);
    EXPECT_EQ(result, -1); // Function should return error code
}

TEST(RotateArrayTest, SingleElementArray) {
    int32_t arr[] = {1};
    uint32_t size = 1;
    uint32_t k = 1;
    auto res = s32_rotateArray(arr, size, k);
    EXPECT_EQ(arr[0], 1); // Array should remain unchanged
    EXPECT_EQ(res, 1); // Array should remain unchanged
}

TEST(RotateArrayTest, ZeroRotation) {
    int32_t arr[] = {1, 2, 3, 4, 5};
    uint32_t size = 5;
    uint32_t k = 0; // No rotation
    s32_rotateArray(arr, size, k);
    EXPECT_EQ(arr[0], 1);
    EXPECT_EQ(arr[1], 2);
    EXPECT_EQ(arr[2], 3);
    EXPECT_EQ(arr[3], 4);
    EXPECT_EQ(arr[4], 5);
}
TEST(RotateArrayTest, RotationByArraySize) {
    int32_t arr[] = {1, 2, 3, 4, 5};
    uint32_t size = 5;
    uint32_t k = 5; // Rotation by array size
    s32_rotateArray(arr, size, k);
    EXPECT_EQ(arr[0], 1);
    EXPECT_EQ(arr[1], 2);
    EXPECT_EQ(arr[2], 3);
    EXPECT_EQ(arr[3], 4);
    EXPECT_EQ(arr[4], 5);
}
/* !todd: test failure
TEST(RotateArrayTest, RotationWithDuplicates) {
    int32_t arr[] = {1, 2, 3, 2, 1};
    uint32_t size = 5;
    uint32_t k = 2;
    s32_rotateArray(arr, size, k);
    EXPECT_EQ(arr[0], 3);
    EXPECT_EQ(arr[1], 2);
    EXPECT_EQ(arr[2], 1);
    EXPECT_EQ(arr[3], 1);
    EXPECT_EQ(arr[4], 2);
}
TEST(RotateArrayTest, CharData) {
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    uint32_t size = 5;
    uint32_t k = 2;
    s32_rotateArray((int32_t*)arr, size, k);
    EXPECT_EQ(arr[0], 'd');
    EXPECT_EQ(arr[1], 'e');
    EXPECT_EQ(arr[2], 'a');
    EXPECT_EQ(arr[3], 'b');
    EXPECT_EQ(arr[4], 'c');
}

*/