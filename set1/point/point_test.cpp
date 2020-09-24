#include <iostream>>
#include <gtest/gtest.h>
#include "point.h"


TEST(point,DefaultConstructor) {
    Point a1;
    std::string ExpectedOut="0,0\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());


}
TEST(point,ParameterizedConstructor) {
    Point c1(10,10);
    std::string ExpectedOut="10,10\n";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(point,CopyConstructor) {
    Point a1(10,10);
    Point a2(a1);
    std::string ExpectedOut="10,10\n";
    testing::internal::CaptureStdout();
    a2.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(point,DistanceTest) {
    Point a1(1,1);
    std::string ExpectedOut="distance from Origin is 1 unit\n";
    testing::internal::CaptureStdout();
    a1.distanceFromOrigin();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(point,QuadrantTest) {
    Point a1(10,10);
    std::string ExpectedOut="First Quadrant";
    testing::internal::CaptureStdout();
    a1.quadrant(q1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(point,isOriginTest) {
    Point a1(10,10);
    std::string ExpectedOut="Point is not on the Origin";
    testing::internal::CaptureStdout();
    a1.isOrigin();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}



TEST(point,isOnXaxisTest) {
    Point a1(10,10);
    std::string ExpectedOut="Point is not on X axis";
    testing::internal::CaptureStdout();
    a1.isOnXAxis();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}


TEST(point,isOnYaxisTest) {
    Point a1(20,20);
    std::string ExpectedOut="Point is not on Y axis";
    testing::internal::CaptureStdout();
    a1.isOnYAxis();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}





