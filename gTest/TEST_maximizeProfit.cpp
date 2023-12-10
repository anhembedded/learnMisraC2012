//
// Created by PC on 12/10/2023.
//
#include "gtest/gtest.h"

extern "C"
{
#include "maximizeProfit.h"

};


TEST(MaxProfitTest, ProfitPositive) {
    int32_t prices[] = {7, 1, 5, 3, 6, 4};
    int32_t size = sizeof(prices) / sizeof(prices[0]);
    EXPECT_EQ(maxProfit(prices, size), 5);
}

TEST(MaxProfitTest, ProfitNegative) {
    int32_t prices[] = {7, 6, 5, 4, 3, 2};
    int32_t size = sizeof(prices) / sizeof(prices[0]);
    EXPECT_EQ(maxProfit(prices, size), 0);
}

TEST(MaxProfitTest, InvalidSize) {
    int32_t prices[] = {7};
    int32_t size = sizeof(prices) / sizeof(prices[0]);
    EXPECT_EQ(maxProfit(prices, size), -1);
}
TEST(MaxProfitTest, SingleProfit) {
    int32_t prices[] = {2, 3};
    int32_t size = sizeof(prices) / sizeof(prices[0]);
    EXPECT_EQ(maxProfit(prices, size), 1);
}

TEST(MaxProfitTest, NoProfit) {
    int32_t prices[] = {3, 2};
    int32_t size = sizeof(prices) / sizeof(prices[0]);
    EXPECT_EQ(maxProfit(prices, size), 0);
}

TEST(MaxProfitTest, MultipleProfits) {
    int32_t prices[] = {1, 2, 3, 4, 5, 6, 7};
    int32_t size = sizeof(prices) / sizeof(prices[0]);
    EXPECT_EQ(maxProfit(prices, size), 6);
}

TEST(MaxProfitTest, MultipleProfitsWithDips) {
    int32_t prices[] = {7, 1, 5, 3, 6, 4};
    int32_t size = sizeof(prices) / sizeof(prices[0]);
    EXPECT_EQ(maxProfit(prices, size), 5);
}

