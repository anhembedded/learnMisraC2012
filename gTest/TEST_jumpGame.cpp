//
// Created by PC on 12/10/2023.
//
#include "gtest/gtest.h"
extern "C" {
#include "jumpGame.h"
}


TEST(CanJumpTest, GeneralCases) {
    int32_t arr1[ARR_MAX_SIZE] = {2, 3, 1, 1, 4};
    EXPECT_EQ(canJump(arr1, 5), 1U);

    int32_t arr2[ARR_MAX_SIZE] = {3, 2, 1, 0, 4};
    EXPECT_EQ(canJump(arr2, 5), 0U);
}

TEST(CanJumpTest, EdgeCases) {
    int32_t arr1[ARR_MAX_SIZE] = {0};
    EXPECT_EQ(canJump(arr1, 1), 1U);

    int32_t arr2[ARR_MAX_SIZE] = {2, 0, 0};
    EXPECT_EQ(canJump(arr2, 3), 0U);

    int32_t arr3[ARR_MAX_SIZE] = {1, 2, 0, 1};
    EXPECT_EQ(canJump(arr3, 4), 1U);
}

TEST(CanJumpTest, AdditionalCases) {
    int32_t arr1[ARR_MAX_SIZE] = {1, 1, 1, 1, 1};
    EXPECT_EQ(canJump(arr1, 5), 1U);

    int32_t arr2[ARR_MAX_SIZE] = {1, 0, 1, 0, 1};
    EXPECT_EQ(canJump(arr2, 5), 0U);

    int32_t arr3[ARR_MAX_SIZE] = {4, 0, 0, 0, 0};
    EXPECT_EQ(canJump(arr3, 5), 0U);

    int32_t arr4[ARR_MAX_SIZE] = {2, 5, 0, 0, 1, 0, 0};
    EXPECT_EQ(canJump(arr4, 7), 1U);

    int32_t arr5[ARR_MAX_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    EXPECT_EQ(canJump(arr5, 10), 0U);
}