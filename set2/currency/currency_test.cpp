#include <iostream>>
#include <gtest/gtest.h>
#include "currency.h"

namespace {
TEST(currency,DefaultConstructor) {
    Currency c1;
    std::string ExpectedOut="0,0";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());


}
TEST(currency,ParameterizedConstructor) {
    Currency c1(100,10);
    std::string ExpectedOut="100,10";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(currency,OneParameterTest) {
    Currency c1(100);
    std::string ExpectedOut="100,0";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());


}

TEST(currency,OperatorplusTest) {
    Currency c1(10,10);
    Currency c2(c1);
    std::string ExpectedOut="20,20";
    testing::internal::CaptureStdout();
    c2.operator+(c1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(currency,OperatorminusTest) {
    Currency c1(10,10);
    Currency c2(c1);
    std::string ExpectedOut="0,0";
    testing::internal::CaptureStdout();
    c2.operator-(c1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}


TEST(currency,OperatorplusParameterTest) {
    Currency c1(10,10);
    std::string ExpectedOut="10,15";
    testing::internal::CaptureStdout();
    c1.operator+(5);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(currency,OperatorMinusParameterTest) {
    Currency c1(10,10);
    std::string ExpectedOut="10,5";
    testing::internal::CaptureStdout();
    c1.operator-(5);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}


TEST(currency,OperatorplusplusTest) {
    Currency c1(1,1);
    std::string ExpectedOut="1,2";
    testing::internal::CaptureStdout();
    c1.operator++();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(currency,OperatorplusplusparameterTest) {
    Currency c1(1,1);
    std::string ExpectedOut="1,4";
    testing::internal::CaptureStdout();
    c1.operator++(3);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(currency,OperatorAssignmmentTest) {
    Currency c1(1,2);
    Currency c2(c1);
    EXPECT_EQ(true,c2.operator==(c1));

}

TEST(currency,OperatorLessThanTest) {
    Currency c1(1,2);
    Currency c2(c1);
    std::string ExpectedOut="";
    testing::internal::CaptureStdout();
    c2.operator<(c1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}

TEST(currency,OperatorGreaterThanTest) {
    Currency c1(1,2);
    Currency c2(c1);
    std::string ExpectedOut="";
    testing::internal::CaptureStdout();
    c2.operator<(c1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}

}

