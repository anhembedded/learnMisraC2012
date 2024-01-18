//
// Created by PC on 1/13/2024.
//
#include "stringManipulation.hpp"
#include "gtest/gtest.h"


TEST(CapFirstLetterTest, HandlesEmptyString) {
    std::string testStr = "";
    capFirstLetter(testStr);
    EXPECT_EQ(testStr, "");
}

TEST(CapFirstLetterTest, HandlesSingleCharacter) {
    std::string testStr = "a";
    capFirstLetter(testStr);
    EXPECT_EQ(testStr, "A");
}

TEST(CapFirstLetterTest, HandlesSingleWord) {
    std::string testStr = "word";
    capFirstLetter(testStr);
    EXPECT_EQ(testStr, "Word");
}

TEST(CapFirstLetterTest, HandlesMultipleWords) {
    std::string testStr = "hello world";
    capFirstLetter(testStr);
    EXPECT_EQ(testStr, "Hello World");
}

TEST(CapFirstLetterTest, IgnoresNonLetters) {
    std::string testStr = "123 456";
    capFirstLetter(testStr);
    EXPECT_EQ(testStr, "123 456");
}

TEST(CapFirstLetterTest, HandlesMixedCharacters) {
    std::string testStr = "a1 b2";
    capFirstLetter(testStr);
    EXPECT_EQ(testStr, "A1 B2");
}