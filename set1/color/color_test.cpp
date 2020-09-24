#include <iostream>>
#include <gtest/gtest.h>
#include "color.h"


TEST(color,DefaultConstructor) {
    Color c1;
    EXPECT_EQ(255, c1.invert());

}
TEST(color,ParameterizedConstructor) {
    Color c1(10,10,10);
    EXPECT_EQ(245, c1.invert());

}
TEST(color,CopyConstructor) {
    Color a1(20,20,20);
    Color a2(a1);
    EXPECT_EQ(235,a2.invert());

}



TEST(color,EnumTest) {
    Color a1(color_t::black);
    std::string ExpectedOut="The Color composition is as follows: \nRed: 255, Green: 255,Blue: 255\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}

TEST(color,DisplayTest) {
    Color c1(10,10,10);
    std::string ExpectedOut="The Color composition is as follows: \nRed: 10, Green: 10,Blue: 10\n";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

