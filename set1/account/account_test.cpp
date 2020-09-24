#include <iostream>>
#include <gtest/gtest.h>
#include "account.h"


TEST(Account,DefaultConstructor) {
    Account a1;
    EXPECT_EQ(0.0,a1.getBalance());

}
TEST(Account,ParameterizedConstructor) {
    Account a2(99002488,"Shweta",5000.0);
    EXPECT_EQ(5000.0,a2.getBalance());

}
TEST(Account,CopyConstructor) {
    Account a1(99002488,"Shweta",5000.0);
    Account a2(a1);
    EXPECT_EQ(5000.0,a2.getBalance());

}
TEST(Account,CreditTest) {
    Account a1(99002488,"Shweta",5000.0);
    a1.credit(5000);
    EXPECT_EQ(10000.0,a1.getBalance());

}
TEST(Account,DebitTest) {
    Account a1(99002488,"Shweta",5000.0);
    a1.debit(1000);
    EXPECT_EQ(4000.0,a1.getBalance());
}
TEST(Account,TransactionTest) {
    Account a1(99002488,"Shweta",5000.0);
    a1.debit(1200);
    a1.credit(3400);
    a1.debit(2000);
    a1.credit(3000);
    EXPECT_EQ(8200.0,a1.getBalance()) << "Invalid Balance";
}
TEST(Account,DisplayTest) {
    Account a1(99002488,"Shweta",5000.0);
    std::string ExpectedOut="99002488,Shweta,5000\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

