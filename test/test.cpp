//
// Created by kirill on 09.09.18.
//

#include <gtest/gtest.h>

#include "../src/lib.h"

TEST(testGroup1, test1){
    ASSERT_EQ(find_sum(2, 3), 5);
}


int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
