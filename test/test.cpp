//
// Created by kirill on 09.09.18.
//

#include <gtest/gtest.h>
#include <string>
#include "../src/lib.h"

TEST(testGroup1, test1){
    ASSERT_EQ(find_sum(2, 3), 5);
}


TEST(testGroup2, test1){
    std::string a = "a";
    std::string b = "b";
    std::string result = "ab";
    ASSERT_EQ(find_strings_sum(a, b), result);
}

TEST(testGroup2, test2){
    ASSERT_EQ(find_sum(3, 3), 6);
}


int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
