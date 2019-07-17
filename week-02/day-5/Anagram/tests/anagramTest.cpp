#include <string>
#include <iostream>
#include <gtest/gtest.h>
#include <anagram.h>

TEST(anagram_check, test_simple_words)
{

    std::vector<std::array<std::string, 2>> testVector = {
            {"dog", "god"},
            {"cat", "tac"}
    };

    for (int i = 0; i < testVector.size(); ++i) {
        EXPECT_TRUE(isAnagram(testVector[i][0], testVector[i][1]));
        std::cout << i << ": " << testVector[i][0] << ", " << testVector[i][1] << std::endl;
    }
}

TEST(anagram_check, test_simple_words_false)
{

    std::vector<std::array<std::string, 2>> testVector = {
            {"dog", "goda"},
            {"cat", "tacc"}
    };

    for (int i = 0; i < testVector.size(); ++i) {
        EXPECT_FALSE(isAnagram(testVector[i][0], testVector[i][1]));
        std::cout << i << ": " << testVector[i][0] << ", " << testVector[i][1] << std::endl;
    }
}