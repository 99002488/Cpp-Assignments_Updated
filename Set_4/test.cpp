#include"main.cpp"
#include<iostream>
#include<gtest/gtest.h>
TEST(Complex,complexTest){
	Complex<int> p1(1,1);
	std::string ExpectedOut="1+1i\n";
	testing::internal::CaptureStdout();
	p1.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(point,PointTest){
	Point<int> p1(1,1);
	std::string ExpectedOut="X axis:1\nY axis:1\n";
	testing::internal::CaptureStdout();
	p1.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}


TEST(point,PointDistanceTest){
	Point<int> p1(1,1);
	std::string ExpectedOut="Distance from Origin:1\n";
	testing::internal::CaptureStdout();
	p1.distanceFromOrigin();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}


