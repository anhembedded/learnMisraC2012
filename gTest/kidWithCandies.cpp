#include "gtest/gtest.h"
extern "C" {
#include "kidWithCandies.h" // replace with your header file name
}

TEST(KidsWithCandiesTest, HandlesValidInput) {
    const int32_t s32_candies[3] = {2, 3, 5};
    int32_t s32_candiesSize = 3;
    int32_t s32_extraCandies = 3;
    uint32_t u32_result[3];

    uint32_t returnVal = u32_kidsWithCandies(s32_candies, s32_candiesSize, s32_extraCandies, u32_result);

    ASSERT_EQ(returnVal, 1);
    ASSERT_EQ(u32_result[0], 0);
    ASSERT_EQ(u32_result[1], 1);
    ASSERT_EQ(u32_result[2], 1);
}

TEST(KidsWithCandiesTest, HandlesInvalidInput) {
    const int32_t s32_candies[3] = {-1, 3, 5}; // Negative number of candies is invalid
    int32_t s32_candiesSize = 3;
    int32_t s32_extraCandies = 3;
    uint32_t u32_result[3];

    uint32_t returnVal = u32_kidsWithCandies(s32_candies, s32_candiesSize, s32_extraCandies, u32_result);

    ASSERT_EQ(returnVal, 0); // Expect 0 for invalid input
}
TEST(KidsWithCandiesTest, HandlesAllKidsCanHaveMostCandies) {
    const int32_t s32_candies[3] = {1, 1, 1};
    int32_t s32_candiesSize = 3;
    int32_t s32_extraCandies = 3;
    uint32_t u32_result[3];

    uint32_t returnVal = u32_kidsWithCandies(s32_candies, s32_candiesSize, s32_extraCandies, u32_result);

    ASSERT_EQ(returnVal, 1);
    ASSERT_EQ(u32_result[0], 1);
    ASSERT_EQ(u32_result[1], 1);
    ASSERT_EQ(u32_result[2], 1);
}

TEST(KidsWithCandiesTest, HandlesNoKidsCanHaveMostCandies) {
    const int32_t s32_candies[3] = {9, 10, 11};
    int32_t s32_candiesSize = 3;
    int32_t s32_extraCandies = 1; // Extra candies are not enough for any kid to have the most
    uint32_t u32_result[3];

    uint32_t returnVal = u32_kidsWithCandies(s32_candies, s32_candiesSize, s32_extraCandies, u32_result);

    ASSERT_EQ(returnVal, 1);
    ASSERT_EQ(u32_result[0], 0);
    ASSERT_EQ(u32_result[1], 0);
    ASSERT_EQ(u32_result[2], 1);
}