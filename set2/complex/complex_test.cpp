#include <iostream>>
#include <gtest/gtest.h>
#include "complex.h"

namespace {
TEST(complex,DefaultConstructor) {
    Complex c1;
    std::string ExpectedOut="0+0i";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());


}
TEST(complex,ParameterizedConstructor) {
    Complex c1(1,1);
    std::string ExpectedOut="1+1i";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(complex,OneParameterTest) {
    Complex c1(1);
    std::string ExpectedOut="1+0i";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());


}

TEST(complex,OperatorplusTest) {
    Complex c1(1,1);
    std::string ExpectedOut="1+1i";
    testing::internal::CaptureStdout();
    c1.operator+();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(complex,OperatorminusTest) {
    Complex c1(1,1);
    std::string ExpectedOut="-1+-1i";
    testing::internal::CaptureStdout();
    c1.operator-();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(complex,OperatorstarTest) {
    Complex c1(2,1);
    std::string ExpectedOut="3+4i";
    testing::internal::CaptureStdout();
    c1.operator*();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(complex,OperatorplusplusTest) {
    Complex c1(1,1);
    std::string ExpectedOut="2+1i";
    testing::internal::CaptureStdout();
    c1.operator++();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(complex,OperatorplusplusparameterTest) {
    Complex c1(1,1);
    std::string ExpectedOut="4+1i";
    testing::internal::CaptureStdout();
    c1.operator++(3);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(complex,OperatorAssignmmentTest) {
    Complex c1(1,2);
    Complex c2(c1);
    EXPECT_EQ(true,c2.operator==(c1));

}
}
