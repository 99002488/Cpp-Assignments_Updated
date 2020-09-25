#include "employee.h"
#include"engineer.h"
#include"manager.h"
#include"trainee.h"
#include <gtest/gtest.h>

using namespace std;

TEST(IEmployee,EngineerPayrollTest) {
    Engineer a1("2488","Shweta",10000,2,3);
    std::string ExpectedOut = "Payroll : 600\n";
    testing::internal::CaptureStdout();
    a1.payroll();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(IEmployee,EngineerAppraisalTest) {
    Engineer a1("2488","Shweta",10000,2,3);
    std::string ExpectedOut = "Appraisal by 10% : 11000\n";
    testing::internal::CaptureStdout();
    a1.appraisal();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(IEmployee,ManagerAppraisalTest) {
    Manager a1("2488","Shweta",10000,2,3,5);
    std::string ExpectedOut = "Appraisal by 10%: 11000\n";
    testing::internal::CaptureStdout();
    a1.appraisal();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(IEmployee,ManagerPayrollTest) {
    Manager a1("2488","Shweta",10000,2,3,5);
    std::string ExpectedOut = "Payroll: 1500\n";
    testing::internal::CaptureStdout();
    a1.payroll();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(IEmployee,TraineePayrollTest) {
    Trainee a1("2488","Shweta",10000,"2A",10);
    std::string ExpectedOut = "Payroll: 100\n";
    testing::internal::CaptureStdout();
    a1.payroll();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(IEmployee,TraineeAppraisalTest) {
    Trainee a1("2488","Shweta",10000,"2A",10);
    std::string ExpectedOut = "Appraisal by 10%: 11000\n";
    testing::internal::CaptureStdout();
    a1.appraisal();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

