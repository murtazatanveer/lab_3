/**
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 *
 * 
  MODIFIED BY : MURTAZA TANVEEER
  REG NO      : SP23-BSE-096
  SECTION     :2C     */


#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  double agi = 0.0;
  char c;
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  double numChildren = 0;
  double child_tax = 0;

  printf("\nPlease enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);
  //remove the "enter" endline character
  

  printf("\n\nDo you have any children? (Y) or (N)? : ");
  scanf("%c",&c);

  if(c == 'y' || c == 'Y') {

    printf("\n\nHow many children do you have? : ");
    scanf("%d", &numChildren);
   child_tax = numChildren *2000;

  }

if(agi>0 && agi<19900  ){

// 10 percent of agi

  tax = (10*agi)/(100);
  childCredit = child_tax;
  totalTax = tax - (child_tax);

 printf("AGI:          $%.2lf\n\n", agi);
  printf("Tax:          $%.2lf\n\n", tax);
  printf("Child Credit: $%.2lf\n\n", childCredit);
  printf("Total Tax:    $%.2f\n\n", totalTax);

}


  //TODO: compute the tax, child credit, and total tax here

  printf("AGI:          $%10.2f\n\n", agi);
  printf("Tax:          $%10.2f\n\n", tax);
  printf("Child Credit: $%10.2f\n\n", childCredit);
  printf("Total Tax:    $%10.2f\n\n", totalTax);

  return 0;
}
