#include<stdio.h>
#include "func.h"
#include "unity_internals.h"
#include "unity.h"
/**
 * @brief Simple calculator
 * 
 * @return int 
 */
int sum(int a,int b)
{
    return a+b+10;
}

void setUp(void)
{
}

void tearDown(void)
{
}
void test_sum()
{
    TEST_ASSERT_EQUAL(sum(20,10),40);
    //TEST_ASSERT_EQUAL(sum(INT_MAX,1),40);
}
void test_sub()
{
    TEST_ASSERT_EQUAL(sub(20,10),10);
    //TEST_ASSERT_EQUAL(sum(INT_MAX,1),40);
}
void test_prod()
{
    TEST_ASSERT_EQUAL(prod(20,10),200);
    //TEST_ASSERT_EQUAL(sum(INT_MAX,1),40);
}
void test_div()
{
    TEST_ASSERT_EQUAL(div(20,10),2);
    //TEST_ASSERT_EQUAL(sum(INT_MAX,1),40);
}
void test_mod()
{
    TEST_ASSERT_EQUAL(mod(20,10),0);
    //TEST_ASSERT_EQUAL(sum(INT_MAX,1),40);
}
int main(void)
{
  UnityBegin("testsum ");
  RUN_TEST(test_sum);
  RUN_TEST(test_sub);
  RUN_TEST(test_prod);
  RUN_TEST(test_div);
  RUN_TEST(test_mod);
  return (UnityEnd());
}

