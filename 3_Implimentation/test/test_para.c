#include "line_para.h"
#include "unity.h"
#include "stdio.h"
#include <math.h>

void test_c_addition(void);
void test_c_multiplication(void);
void test_c_division(void);
void test_c_magnitude(void);
void test_c_angle(void);
void test_shortLine(void);
void test_mediumPiLine(void);
void test_mediumTLine(void);
void test_longLine(void);
c c1 = {0, 0};
c c2 = {0, 0},res={0,0};
void setUp(){}
void tearDown(){}

int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_c_addition);
  RUN_TEST(test_c_multiplication);
  RUN_TEST(test_c_division);
  RUN_TEST(test_c_magnitude);
  RUN_TEST(test_c_angle);
  RUN_TEST(test_shortLine);
  RUN_TEST(test_mediumPiLine);
  RUN_TEST(test_mediumTLine);
  RUN_TEST(test_longLine);
  return UNITY_END();
}
void test_c_addition(void)
{
    c1.real=10;
    c1.img=20;
    c2.real=20;
    c2.img=-10;
    res=c_addition(c1,c2);
    TEST_ASSERT_EQUAL(30.0, res.real);
    TEST_ASSERT_EQUAL(10.0, res.img);
    c1.real=567894;
    c1.img=10;
    c2.real=10000;
    c2.img=-9120;
    res=c_addition(c1,c2);
    TEST_ASSERT_EQUAL(577894.0, res.real);
    TEST_ASSERT_EQUAL(-9110.0, res.img);
}
void test_c_multiplication(void)
{
    c1.real=10;
    c1.img=20;
    c2.real=20;
    c2.img=-10;
    res=c_multiplication(c1,c2);
    TEST_ASSERT_EQUAL(400.0, res.real);
    TEST_ASSERT_EQUAL(300.0, res.img);
    c1.real=456789;
    c1.img=10;
    c2.real=10000;
    c2.img=-987654;
    res=c_multiplication(c1,c2);
    TEST_ASSERT_EQUAL(4.57776654*pow(10,9), res.real);
    TEST_ASSERT_EQUAL(-4.51149383006*pow(10,11), res.img);
}
void test_c_division(void)
{
    c1.real=10;
    c1.img=20;
    c2.real=20;
    c2.img=-10;
    res=c_division(c1,c2);
    TEST_ASSERT_EQUAL(0.0, res.real);
    TEST_ASSERT_EQUAL(1.0, res.img);
    c1.real=-456789;
    c1.img=10;
    c2.real=0.0;
    c2.img=0.0;
    res=c_division(c1,c2);
    TEST_ASSERT_EQUAL(0.0, res.real);
    TEST_ASSERT_EQUAL(0.0, res.img);
}
void test_c_magnitude(void)
{
    double r;
    c1.real=8;
    c1.img=6;
    r=c_magnitude(c1);
    TEST_ASSERT_EQUAL(10.0, r);
}
void test_c_angle(void)
{
    double r;
    c1.real=2;
    c1.img=8;
    r=c_angle(c1);
    TEST_ASSERT_EQUAL(1.3258, r);
}
void test_shortLine(void)
{
    double *p=shortLine(5000000,22000,0.8,4,6),*res=calloc(4,sizeof(double));
    *(res)=13816.4;*(res+1)=393.6698;*(res+2)=93.93435;*(res+3)=8.826117;
    for(int i=0;i<4;i++)
        TEST_ASSERT_EQUAL_FLOAT(*(res+i),*(p+i));
    free(res);
}
void test_mediumPiLine(void)
{
    double arr[7]={43138.66,8090.937,179.0006,-44.11282,0.910201,99.946,15.184};
    double *p=mediumPiLine(20000000,66000,0.9,0.1,0.5,0.00001,100),*res=arr;
    for(int i=0;i<7;i++)
        TEST_ASSERT_EQUAL_FLOAT(*(res+i),*(p+i));
}
void test_mediumTLine(void)
{
    double arr[7]={43138.66,8090.937,179.0006,-22.5435,0.9521247,99.94727,15.184};
    double *p=mediumTLine(20000000,66000,0.9,0.1,0.5,0.00001,100),*res=arr;
    for(int i=0;i<7;i++)
        TEST_ASSERT_EQUAL_FLOAT(*(res+i),*(p+i));
}
void test_longLine(void)
{
     double arr[6]={63534.243741,-19.682806,15982.172115,-78.730239, 24.597590,0.041328};
    double *p=longLine(20000000,110000,0.8,0.16,0.25,0.0000015,200),*res=arr;
    for(int i=0;i<6;i++)
        TEST_ASSERT_EQUAL_FLOAT(*(res+i),*(p+i));
}