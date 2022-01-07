#include "vendor/unity.h"
#include "../src/decimal_to_binary.h"

void setUp(void)
{
}

void tearDown(void)
{
}

static void test_decimal_17(void)
{
   TEST_ASSERT_EQUAL(10001, decimalToBinary(17));
}

static void test_decimal_32(void)
{
   TEST_ASSERT_EQUAL(100000, decimalToBinary(32));
}


int main(void)
{
   UnityBegin("test/test_decimal_to_binary.c");

   RUN_TEST(test_decimal_17);
   RUN_TEST(test_decimal_32);
   
   return UnityEnd();
}
