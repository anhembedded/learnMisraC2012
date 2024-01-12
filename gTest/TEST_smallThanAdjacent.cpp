//
// Created by PC on 1/12/2024.
//
#include "gtest/gtest.h"
#include "smallerThanAdjacent.hpp"

// Test case 1: The input vector is empty - expect the result to be an empty vector
TEST(SmallerThanAdjacentTest, HandlesEmptyVector) {
    std::vector<int32_t> input{};
    std::vector<int32_t> expected{};
    EXPECT_EQ(smallerThanAdjacent(input), expected);
}

// Test case 2: The input vector has less than three elements - expect the result to be an empty vector
TEST(SmallerThanAdjacentTest, HandlesVectorWithLessThanThreeElements) {
    std::vector<int32_t> input{1, 2};
    std::vector<int32_t> expected{};
    EXPECT_EQ(smallerThanAdjacent(input), expected);
}

// Test case 3: No elements are smaller than their adjacent ones
TEST(SmallerThanAdjacentTest, HandlesNoElementsSmallerThanAdjacent) {
    std::vector<int32_t> input{3, 4, 5, 6};
    std::vector<int32_t> expected{};
    EXPECT_EQ(smallerThanAdjacent(input), expected);
}

// Test case 4: Some elements are smaller than their adjacent ones
TEST(SmallerThanAdjacentTest, HandlesSomeElementsSmallerThanAdjacent) {
    std::vector<int32_t> input{5, 3, 4, 2, 5};
    std::vector<int32_t> expected{3, 2};
    EXPECT_EQ(smallerThanAdjacent(input), expected);
}

// Test case 5: All elements are smaller than their adjacent ones
TEST(SmallerThanAdjacentTest, HandlesAllElementsSmallerThanAdjacent) {
    std::vector<int32_t> input{3, 1, 3, 1, 3};
    std::vector<int32_t> expected{1, 1};
    EXPECT_EQ(smallerThanAdjacent(input), expected);
}

// Test case 1: The input list is empty - expect the result to be an empty list
TEST(SmallerThanAdjacentListTest, HandlesEmptyList) {
    std::list<int32_t> input{};
    std::list<int32_t> expected{};
    EXPECT_EQ(smallerThanAdjacent(input), expected);
}

// Test case 2: The input list has less than three elements - expect the result to be an empty list
TEST(SmallerThanAdjacentListTest, HandlesListWithLessThanThreeElements) {
    std::list<int32_t> input{1, 2};
    std::list<int32_t> expected{};
    EXPECT_EQ(smallerThanAdjacent(input), expected);
}

// Test case 3: No elements are smaller than their adjacent ones
TEST(SmallerThanAdjacentListTest, HandlesNoElementsSmallerThanAdjacent) {
    std::list<int32_t> input{3, 4, 5, 6};
    std::list<int32_t> expected{};
    EXPECT_EQ(smallerThanAdjacent(input), expected);
}

// Test case 4: Some elements are smaller than their adjacent ones
TEST(SmallerThanAdjacentListTest, HandlesSomeElementsSmallerThanAdjacent) {
    std::list<int32_t> input{5, 3, 4, 2, 5};
    std::list<int32_t> expected{3, 2};
    EXPECT_EQ(smallerThanAdjacent(input), expected);
}

// Test case 5: All elements are smaller than their adjacent ones
TEST(SmallerThanAdjacentListTest, HandlesAllElementsSmallerThanAdjacent) {
    std::list<int32_t> input{3, 1, 3, 1, 3};
    std::list<int32_t> expected{1, 1};
    EXPECT_EQ(smallerThanAdjacent(input), expected);
}