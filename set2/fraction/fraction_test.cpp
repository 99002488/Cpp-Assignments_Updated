#include <iostream>>
#include <gtest/gtest.h>
#include "fraction.h"

namespace {
TEST(fraction,DefaultConstructor) {
    Fraction f1;
    std::string ExpectedOut="0/0";
    testing::internal::CaptureStdout();
    f1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());


}
TEST(fraction,ParameterizedConstructor) {
    Fraction f1(1,1);
    std::string ExpectedOut="1/1";
    testing::internal::CaptureStdout();
    f1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(fraction,OneParameterTest) {
    Fraction f1(1);
    std::string ExpectedOut="1/1";
    testing::internal::CaptureStdout();
    f1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());


}

TEST(fraction,OperatorplusTest) {
    Fraction f1(1,1);
    Fraction f2(f1);
    std::string ExpectedOut="2/1";
    testing::internal::CaptureStdout();
    f2.operator+(f1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(fraction,OperatorminusTest) {
    Fraction f1(1,1);
    Fraction f2(f1);
    std::string ExpectedOut="0/1";
    testing::internal::CaptureStdout();
    f2.operator-(f1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(fraction,OperatorstarTest) {
    Fraction f1(2,3);
    Fraction f2(f1);
    std::string ExpectedOut="4/9";
    testing::internal::CaptureStdout();
    f2.operator*(f1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(fraction,OperatorplusParameterTest) {
    Fraction f1(1,1);
    std::string ExpectedOut="2/1";
    testing::internal::CaptureStdout();
    f1.operator+(1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(fraction,OperatorMinusParameterTest) {
    Fraction f1(3,2);
    std::string ExpectedOut="1/2";
    testing::internal::CaptureStdout();
    f1.operator-(1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}


TEST(fraction,OperatorAssignmmentTest) {
    Fraction f1(1,2);
    Fraction f2(f1);
    EXPECT_EQ(true,f2.operator==(f1));

}

TEST(fraction,OperatorLessThanTest) {
    Fraction f1(1,2);
    Fraction f2(f1);
    EXPECT_EQ(false,f2.operator<(f1));

}

TEST(fraction,OperatorGreaterThanTest) {
    Fraction f1(1,2);
    Fraction f2(f1);
    EXPECT_EQ(false,f2.operator>(f1));
}

TEST(fraction, SimplifyTest) {
    Fraction f1(1,2);
    std::string ExpectedOut="Simplified form is : 1/2";
    testing::internal::CaptureStdout();
    f1.simplify();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}

TEST(fraction, isSimplestTest) {
    Fraction f1(1,2);
    std::string ExpectedOut="Fraction Is Simplest";
    testing::internal::CaptureStdout();
    f1.isSimplest();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
}

