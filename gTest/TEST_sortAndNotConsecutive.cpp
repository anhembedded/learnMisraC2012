//
// Created by PC on 1/11/2024.
//
#include <gtest/gtest.h>
#include "sortAndNotConsecutive.hpp"


// Assuming the function isSortAndNotConsecutive is defined elsewhere

TEST(IsSortAndNotConsecutiveTest, HandlesEmptyVector) {
    std::vector<int32_t> vec = {};
    EXPECT_FALSE(isSortAndNotConsecutive(vec));
}

TEST(IsSortAndNotConsecutiveTest, HandlesUniqueNonConsecutiveElements) {
    std::vector<int32_t> vec = {3, 1, 4, 2, 5};
    EXPECT_TRUE(isSortAndNotConsecutive(vec));
    // Optionally check if the vector is sorted
    EXPECT_TRUE(std::is_sorted(vec.begin(), vec.end()));
}

TEST(IsSortAndNotConsecutiveTest, HandlesConsecutiveElements) {
    std::vector<int32_t> vec = {1, 2, 3, 4, 5};
    EXPECT_FALSE(isSortAndNotConsecutive(vec));
}

TEST(IsSortAndNotConsecutiveTest, HandlesDuplicateElements) {
    std::vector<int32_t> vec = {1, 2, 2, 4, 5};
    EXPECT_FALSE(isSortAndNotConsecutive(vec));
}
