#include <gtest/gtest.h>
#include <cstdint>
#include <climits> // For UINT32_MAX

extern "C"
{
  #include "codeLearnIo.h"
}



TEST(MajorityElementTest, ClearMajority) {
    uint8_t arr[ARR_MAX_SIZE] = {1, 2, 2, 2, 3};
    ASSERT_EQ(2, majorityElement(arr, 5));
}

TEST(MajorityElementTest, NoMajority) {
    uint8_t arr[ARR_MAX_SIZE] = {1, 2, 3, 4, 5};
    ASSERT_EQ(-1, majorityElement(arr, 5)); // Assuming -1 denotes no majority
}

TEST(MajorityElementTest, AllElementsSame) {
    uint8_t arr[ARR_MAX_SIZE] = {2, 2, 2, 2, 2};
    ASSERT_EQ(2, majorityElement(arr, 5));
}

TEST(MajorityElementTest, SingleElement) {
    uint8_t arr[ARR_MAX_SIZE] = {42};
    ASSERT_EQ(42, majorityElement(arr, 1));
}

TEST(MajorityElementTest, TwoElementsOneMajority) {
    uint8_t arr[ARR_MAX_SIZE] = {7, 7};
    ASSERT_EQ(7, majorityElement(arr, 2));
}

TEST(MajorityElementTest, TwoElementsNoMajority) {
    uint8_t arr[ARR_MAX_SIZE] = {7, 8};
    ASSERT_EQ(-1, majorityElement(arr, 2));
}

TEST(MajorityElementTest, EvenNumberOfElementsNoMajority) {
    uint8_t arr[ARR_MAX_SIZE] = {1, 1, 2, 2};
    ASSERT_EQ(-1, majorityElement(arr, 4));
}

TEST(MajorityElementTest, OddNumberOfElementsMajority) {
    uint8_t arr[ARR_MAX_SIZE] = {3, 3, 3, 1, 2};
    ASSERT_EQ(3, majorityElement(arr, 5));
}
