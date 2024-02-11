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

  




  int year;
  int numPassed = 0;
  int numFailed = 0;

  //Hard-coded ad-hoc test cases
  //Do not change these, add your own test cases
  //below.  All test cases should pass.

  
  printf("Test Case 1 : ");
  scanf("%d",&year);
  if((year % 4==0 && year % 100 != 0 ) || (year % 400 == 0) ) {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  } else {
    printf("FAILED!\n");
    
    numFailed = numFailed + 1;
  }
  
  
  printf("Test Case 2 : ");
  scanf("%d",&year);
  if((year % 4==0 && year % 100 != 0 ) || (year % 400 == 0) ) {
    printf("PASED!\n");
    numPassed = numPassed + 1;
  } else {
    printf("FAILED!\n");
    
    numFailed = numFailed + 1;
  }


printf("Test Case 3 : ");
  scanf("%d",&year);
  if((year % 4==0 && year % 100 != 0 ) || (year % 400 == 0) ) {
    printf("PASSED\n");
    numPassed = numPassed + 1;
  } else {
    printf("FAILED!\n");
    
    numFailed = numFailed + 1;
  }

  
  printf("Test Case 4 : ");
  scanf("%d",&year);
  if((year % 4==0 && year % 100 != 0 ) || (year % 400 == 0) ) {
    printf("PASED!\n");
    
    numPassed = numPassed + 1;
  } else {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  }


printf("Test Case 5 : ");
  scanf("%d",&year);
  if((year % 4==0 && year % 100 != 0 ) || (year % 400 == 0) ) {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  } else {
    printf("FAILED\n");
    

    numFailed = numFailed + 1;
  }


printf("Test Case 6 : ");
  scanf("%d",&year);
  if((year % 4==0 && year % 100 != 0 ) || (year % 400 == 0) ) {
    printf("PASSED!\n");
      numPassed = numPassed + 1;
  } else {
    printf("FAILED!\n");
  
    numFailed = numFailed + 1;
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


if((year % 4==0 && year % 100 != 0 ) || (year % 400 == 0) ){

printf("\ntrue (1)\n\n");
  
 }
 else{
 
 printf("\n false(0)\n\n");
 }
 

  //TODO: Write your logic here
  //      The year is stored in the variable year
  //      Your function should return true (1) if it represents a leap year
  //      and false (0) if it does not.
}