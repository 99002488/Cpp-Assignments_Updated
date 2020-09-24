#include <iostream>>
#include <gtest/gtest.h>
#include "distance.h"

namespace {
TEST(distance,DefaultConstructor) {
    Distance d1;
    std::string ExpectedOut="0,0";
    testing::internal::CaptureStdout();
    d1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());


}
TEST(distance,ParameterizedConstructor) {
    Distance d1(100,10);
    std::string ExpectedOut="100,10";
    testing::internal::CaptureStdout();
    d1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}

TEST(distance,OperatorplusTest) {
    Distance c1(10,10);
    Distance c2(c1);
    std::string ExpectedOut="21,8";
    testing::internal::CaptureStdout();
    c2.operator+(c1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(distance,OperatorminusTest) {
    Distance c1(10,10);
    Distance c2(c1);
    std::string ExpectedOut="0,0";
    testing::internal::CaptureStdout();
    c2.operator-(c1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}


TEST(distance,OperatorplusParameterTest) {
    Distance c1(10,10);
    std::string ExpectedOut="11,3";
    testing::internal::CaptureStdout();
    c1.operator+(5);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(distance,OperatorMinusParameterTest) {
    Distance c1(10,10);
    std::string ExpectedOut="10,5";
    testing::internal::CaptureStdout();
    c1.operator-(5);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}


TEST(distance,OperatorplusplusTest) {
    Distance c1(1,1);
    std::string ExpectedOut="2,2";
    testing::internal::CaptureStdout();
    c1.operator++();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(distance,OperatorplusplusparameterTest) {
    Distance c1(1,1);
    std::string ExpectedOut="4,4";
    testing::internal::CaptureStdout();
    c1.operator++(3);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(distance,OperatorEqualTest) {
    Distance d1(1,2);
    Distance d2(d1);
    EXPECT_EQ(true,d2.operator==(d1));

}

TEST(distance,OperatorLessThanTest) {
    Distance d1(1,2);
    Distance d2(d1);
    EXPECT_EQ(false,d2.operator<(d1));

}

TEST(distance,OperatorGreaterThanTest) {
    Distance d1(1,2);
    Distance d2(d1);
    EXPECT_EQ(false,d2.operator>(d1));
}

}


