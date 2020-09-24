#include <iostream>>
#include <gtest/gtest.h>
#include "mytime.h"

namespace {
TEST(mytime,DefaultConstructor) {
    MyTime m1;
    std::string ExpectedOut="0:0:0";
    testing::internal::CaptureStdout();
    m1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());


}
TEST(mytime,ParameterizedConstructor) {
    MyTime m1(1,2,40);
    std::string ExpectedOut="1:2:40";
    testing::internal::CaptureStdout();
    m1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(mytime,TwoParameterTest) {
    MyTime m1(10,10);
    std::string ExpectedOut="10:10:0";
    testing::internal::CaptureStdout();
    m1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());


}

TEST(mytime,OperatorplusTest) {
    MyTime m1(10,10,10);
    MyTime m2(m1);
    std::string ExpectedOut="20:20:20";
    testing::internal::CaptureStdout();
    m2.operator+(m1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(mytime,OperatorminusTest) {
    MyTime m1(10,10,10);
    MyTime m2(m1);
    std::string ExpectedOut="0:0:0";
    testing::internal::CaptureStdout();
    m2.operator-(m1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}


TEST(mytime,OperatorplusParameterTest) {
    MyTime m1(10,10,10);
    std::string ExpectedOut="10:10:15";
    testing::internal::CaptureStdout();
    m1.operator+(5);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(mytime,OperatorMinusParameterTest) {
    MyTime m1(10,10,10);
    std::string ExpectedOut="10:10:5";
    testing::internal::CaptureStdout();
    m1.operator-(5);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}


TEST(mytime,OperatorplusplusTest) {
    MyTime m1(1,1,1);
    std::string ExpectedOut="1:1:2";
    testing::internal::CaptureStdout();
    m1.operator++();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(mytime,OperatorplusplusparameterTest) {
    MyTime m1(1,1,1);
    std::string ExpectedOut="1:1:4";
    testing::internal::CaptureStdout();
    m1.operator++(3);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(mytime,OperatorplusequalparameterTest) {
    MyTime m1(1,1,1);
    std::string ExpectedOut="1:1:2";
    testing::internal::CaptureStdout();
    m1.operator+=(1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}


TEST(mytime,OperatorAssignmmentTest) {
    MyTime c1(1,2,3);
    MyTime c2(c1);
    EXPECT_EQ(true,c2.operator==(c1));

}

TEST(mytime,OperatorLessThanTest) {
    MyTime c1(1,2,3);
    MyTime c2(c1);
    EXPECT_EQ(false,c2.operator<(c1));

}

TEST(mytime,OperatorGreaterThanTest) {
    MyTime c1(1,2,3);
    MyTime c2(c1);
    EXPECT_EQ(false,c2.operator>(c1));

}

}


