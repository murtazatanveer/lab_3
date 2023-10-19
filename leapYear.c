/**
 * This program determines if various years are leap
 * years or not.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Returns true (1) if the given year is a leap year,
 * false (0) if it is not a leap year.
 */
int isLeapYear(int year);

int main(int argc, char **argv) {

  bool reportPass = false;
  if(argc > 1 && strcmp(argv[1], "-reportPass") == 0) {
    reportPass = true;
  }

  // i added it

  int year;

  year = atoi(argv[1]);


  int numPassed = 0;
  int numFailed = 0;

  //Hard-coded ad-hoc test cases
  //Do not change these, add your own test cases
  //below.  All test cases should pass.

  year = 2000;
  printf("Test Case 1: year = %d: ", year);
  if(!isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }
// the above logic of leap year is correct 
//below two logics (test case 2 and test case 3 is incorrect)
/*after copying the above logic i find correct answers the cases below i commented is incorrect because
it is logic of test case 2 which is incorrect

output : 

Test Case 1: year = 2012: PASSED!
Test Case 1: year = 2008: PASSED!
Test Case 1: year = 2004: PASSED!

*/
  year = 2001;
  printf("Test Case 2: year = %d: ", year);
  if(isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }
/*incorrect logic 

output : 
 
 Test Case 3: year = 4000: FAILED!
Test Case 3: year = 6000: FAILED!
Test Case 3: year = 8000: FAILED!


*/



 /* year = 2100;
  printf("Test Case 3: year = %d: ", year);
  if(isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }

  //TODO: write *at least* 3 more of your own
  //      test cases here, they should all pass!


  year = 4000;
  printf("Test Case 3: year = %d: ", year);
  if(isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }


  year = 6000;
  printf("Test Case 3: year = %d: ", year);
  if(isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }


  year = 8000;
  printf("Test Case 3: year = %d: ", year);
  if(isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }*/



year = 2012;
  printf("Test Case 4: year = %d: ", year);
  if(!isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }

year = 2008;
  printf("Test Case 5: year = %d: ", year);
  if(!isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }

year = 2004;
  printf("Test Case 6: year = %d: ", year);
  if(!isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }



  printf("\n\n");
  printf("Summary:\n");
  printf("Number of test cases passed: %d\n", numPassed);
  printf("Number of test cases failed: %d\n", numFailed);
  printf("Percentage Passed: %.2f%%\n", (double) numPassed / (numPassed + numFailed) * 100.0);

  if(reportPass) {
    return numPassed;
  } else {
    return numFailed;
  }
}

int isLeapYear(int year) {
// give input in command line arguement

 if((year % 4==0 && year % 100 != 0 ) || (year % 400 == 0) ){

  true(1);
 }
 else{
  false(0);
 }

  //TODO: Write your logic here
  //      The year is stored in the variable year
  //      Your function should return true (1) if it represents a leap year
  //      and false (0) if it does not.
}
