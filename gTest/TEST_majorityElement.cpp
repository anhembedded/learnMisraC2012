#include <gtest/gtest.h>


extern "C"
{
#include "majorityElement.h"
}

TEST(MajorityElementTest, MajorityExists) {
    uint8_t arr[7] = {2, 2, 1, 1, 1, 2, 2};
    EXPECT_EQ(majorityElement(arr, 7), 2);
}

TEST(MajorityElementTest, NoMajority) {
    uint8_t arr[5] = {1, 2, 3, 4, 5};
    EXPECT_EQ(majorityElement(arr, 5), -1);
}

TEST(MajorityElementTest, EmptyArray) {
    uint8_t arr[ARR_MAX_SIZE] = {};
    EXPECT_EQ(majorityElement(arr, 0), -1);
}

TEST(MajorityElementTest, MajorityIsSmallest) {
    uint8_t arr[5] = {0, 0, 0, 1, 2};
    EXPECT_EQ(majorityElement(arr, 5), 0);
}

TEST(MajorityElementTest, MajorityIsLargest) {
    uint8_t arr[5] = {255, 255, 255, 128, 128};
    EXPECT_EQ(majorityElement(arr, 5), 255);
}