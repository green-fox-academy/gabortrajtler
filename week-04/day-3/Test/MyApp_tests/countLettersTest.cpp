#include <gtest/gtest.h>
#include "CountLetters.h"

TEST(countLetters_check, test_apple){

    std::map<char, int> resultMapApple;
    resultMapApple.insert(std::make_pair('a',1));
    resultMapApple.insert(std::make_pair('p',2));
    resultMapApple.insert(std::make_pair('l',1));
    resultMapApple.insert(std::make_pair('e',1));

    CountLetters cl;
    EXPECT_EQ(cl.countLetters("apple"), resultMapApple);
}

TEST(countLetters_check, test_KingKong){

    std::map<char, int> resultMapKingKong;
    resultMapKingKong.insert(std::make_pair('K',2));
    resultMapKingKong.insert(std::make_pair('i',1));
    resultMapKingKong.insert(std::make_pair('n',2));
    resultMapKingKong.insert(std::make_pair('g',2));
    resultMapKingKong.insert(std::make_pair('o',1));
    resultMapKingKong.insert(std::make_pair(' ',1));

    CountLetters cl;
    EXPECT_EQ(cl.countLetters("King Kong"), resultMapKingKong);
}