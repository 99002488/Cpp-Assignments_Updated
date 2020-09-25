#include "customer.h"
#include"postpaid.h"
#include"prepaid.h"
#include <gtest/gtest.h>

TEST(CustomerBase,PostpaidDisplayParameterized) {
    PostpaidCustomer d1("2488","Shweta","9988776655",500.0,24);
    std::string ExpectedOut = "Type of Account : PostPaid\nDue date: 24";
    testing::internal::CaptureStdout();
    d1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(CustomerBase,PrepaidDisplayParameterized) {
    PrepaidCustomer d1("2488","Shweta","9988776655",500.0);
    std::string ExpectedOut = "Type of Account : PrePaid\nRecharge soon to avoid network connection breakage";
    testing::internal::CaptureStdout();
    d1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(CustomerBase,PostpaidDisplay3ParameterConstructor) {
    PostpaidCustomer d1("2488","Shweta","9988776655");
    std::string ExpectedOut = "Type of Account : PostPaid\nDue date: 0";
    testing::internal::CaptureStdout();
    d1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(CustomerBase,PrepaidDisplay3ParameterConstructor) {
    PrepaidCustomer d1("2488","Shweta","9988776655");
    std::string ExpectedOut = "Type of Account : PrePaid\nRecharge soon to avoid network connection breakage";
    testing::internal::CaptureStdout();
    d1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(CustomerBase,PostpaidGetBalance) {
    PostpaidCustomer d1("2488","Shweta","9988776655",500.0,24);
    EXPECT_EQ(500.0, d1.getBalance());
}
TEST(CustomerBase,PrepaidGetBalance) {
    PrepaidCustomer d1("2488","Shweta","9988776655",500.0);
    EXPECT_EQ(500.0, d1.getBalance());
}
TEST(CustomerBase,PostpaidMakeCall) {
    PostpaidCustomer d1("2488","Shweta","9988776655",500.0,24);
    std::string ExpectedOut = "Call time: 10mins\nRemaining recharge balance: 490\n";
    testing::internal::CaptureStdout();
    d1.makeCall(10.0);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(CustomerBase,PrepaidMakeCall) {
    PrepaidCustomer d1("2488","Shweta","9988776655",500.0);
    std::string ExpectedOut = "Call time: 20mins\nRemaining recharge balance: 480\n";
    testing::internal::CaptureStdout();
    d1.makeCall(20.0);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(CustomerBase,PostpaidRecharge) {
    PostpaidCustomer d1("2488","Shweta","9988776655",500.0,24);
    std::string ExpectedOut = " Your Postpaid phone has been recharged by: 150\n Your current Postpaid balance is: 650";
    testing::internal::CaptureStdout();
    d1.credit(150.0);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(CustomerBase,PrepaidRecharge) {
    PrepaidCustomer d1("2488","Shweta","9988776655",500.0);
    std::string ExpectedOut = " Your Prepaid phone has been recharged by: 150\n Your current Prepaid balance is: 650";
    testing::internal::CaptureStdout();
    d1.credit(150.0);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
