#include <iostream>>
#include <gtest/gtest.h>
#include "box.h"


TEST(Account,DefaultConstructor) {
    Box b1;
    EXPECT_EQ(0, b1.length());
    EXPECT_EQ(0, b1.breadth());
    EXPECT_EQ(0, b1.height());

}
TEST(Box,ParameterizedConstructor) {
    Box b2(5,5,5);
    EXPECT_EQ(5, b2.length());
    EXPECT_EQ(5, b2.breadth());
    EXPECT_EQ(5, b2.height());
}

TEST(Box,OneParameterizedConstructor) {
    Box b1(10);
    EXPECT_EQ(10, b1.length());
}

TEST(Box,CopyConstructor) {
    Box b1(20,20,20);
    Box b2(b1);
    EXPECT_EQ(20, b1.length());
    EXPECT_EQ(20, b1.breadth());
    EXPECT_EQ(20, b1.height());
}


TEST(Account,VolumeTest) {
    Box b1(5,5,5);
    EXPECT_EQ(125, b1.volume());
}

TEST(Box,DisplayTest) {
    Box b1(100,200,300);
    std::string ExpectedOut="100,200,300\n";
    testing::internal::CaptureStdout();
    b1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

