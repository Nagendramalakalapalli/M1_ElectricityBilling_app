
#include "unity.h"
#include "unity_internals.h"
#include "ElectricBill.h"


#define PROJECT_NAME "Domestic_Electricity_Bill"

/* Prototypes for all the test functions */

void test_RuralArea(void);
void test_Urban_Area(void);


/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}
/* Write all the test functions for Rural Area */ 
void test_RuralArea(void)
 {
     float units_consumed=50;
  TEST_ASSERT_EQUAL(220, RuralArea(220));
 }

/* Write all the test functions for Urban Area */ 
 void test_UrbanArea(void)
 {
     float units_consumed=50;
  TEST_ASSERT_EQUAL(235, UrbanArea(235));
 }

/* Start of the application test */
int main()
{

  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  RUN_TEST(test_RuralArea);
  RUN_TEST(test_Urban_Area);
/* Close the Unity Test Framework */
  return UNITY_END();
}