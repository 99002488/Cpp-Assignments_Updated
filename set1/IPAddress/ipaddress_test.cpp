#include <iostream>
#include <gtest/gtest.h>
#include "ipaddress.h"


TEST(ipaddress,DefaultConstructor) {
    IPAddress a1;
    std::string ExpectedOut="Your IP Address is: 125.0.0.0";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());


}
TEST(ipaddress,ParameterizedConstructor) {
    IPAddress a1(127,1,1,0);
    std::string ExpectedOut="Your IP Address is: 127.1.1.0";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(ipaddress,OneParameterTest) {
    IPAddress a1(1);
    std::string ExpectedOut="Your IP Address is: 1.1.1.1";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}

TEST(ipaddress,isLoopBackTest) {
    IPAddress a1(125,0,0,1);
    EXPECT_EQ(true,a1.isLoopBack());

}

TEST(ipaddress,getIpClassTest) {
    IPAddress a1(123,1,1,0);
    std::string ExpectedOut="IPClass:  A";
    testing::internal::CaptureStdout();
    a1.getIPClass();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}






