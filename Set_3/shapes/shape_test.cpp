#include <iostream>
#include "polygon.h"
#include "shape.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include <math.h>
#include <gtest/gtest.h>







TEST(ISShape,Circle_area_test){
    Circle c1(10);
    std::string ExpectedOut="Area of the Circle::314.286\n";
    testing::internal::CaptureStdout();
    c1.area();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}

TEST(Polygon,Rectangle_area_test){
    Rectangle r1(4,2);
    std::string ExpectedOut="Area of the Rectangle::8\n";
    testing::internal::CaptureStdout();
    r1.area();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(Polygon,Circle_circumference_test){
    Circle c1(10);
    std::string ExpectedOut="Circumference of the Circle::62.8571\n";
    testing::internal::CaptureStdout();
    c1.circumference();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(Polygon,Rectangle_circumference_test){
    Rectangle r1(4,2);
    std::string ExpectedOut="Circumference of the Rectangle::12\n";
    testing::internal::CaptureStdout();
    r1.circumference();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(Polygon,Triangle_area_test){
    Triangle t1(10,10,10);
    std::string ExpectedOut="Area of the Triangle::43.3013\n";
    testing::internal::CaptureStdout();
    t1.area();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(Polygon,Triangle_circumference_test){
    Triangle t1(3,2,4);
    std::string ExpectedOut="Circumference of the Triangle::9\n";
    testing::internal::CaptureStdout();
    t1.circumference();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
