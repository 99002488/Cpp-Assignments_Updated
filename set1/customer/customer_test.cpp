#include <iostream>>
#include <gtest/gtest.h>
#include "customer.h"


TEST(customer,DefaultConstructor) {
    Customer c1;
    EXPECT_EQ(0.0,c1.getBalance());

}
TEST(customer,ParameterizedConstructor) {
    Customer c1(1001,9324276453,"Shweta",5000.0);
    EXPECT_EQ(5000.0,c1.getBalance());

}
TEST(customer,CopyConstructor) {
    Customer a1(1001,9324276453,"Shweta",5000.0);
    Customer a2(a1);
    EXPECT_EQ(5000.0,a2.getBalance());

}
TEST(customer,CreditTest) {
    Customer a1(1001,9324276453,"Shweta",5000.0);
    a1.credit(3000,prepaid);
    EXPECT_EQ(8000.0,a1.getBalance());

}
TEST(customer,MakecallTest) {
    Customer a1(1001,9324276453,"Shweta",5000.0);

    std::string ExpectedOut="Making call for: -923425512 from 734341861\n";
    testing::internal::CaptureStdout();
    a1.makecall(7666509080);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}


TEST(customer,DisplayTest) {
    Customer a1(1001,9324276453,"Shweta",5000.0);
    std::string ExpectedOut="1001,734341861,Shweta,5000\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}


