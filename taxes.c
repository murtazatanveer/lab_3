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

  double calculation;
  

  printf("\nPlease enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);
  //remove the "enter" endline character
  

  printf("\n\nDo you have any children? (Y) or (N)? : ");
  scanf("%c",&c);

  if(c == 'y' || c == 'Y') {

    printf("\n\nHow many children do you have? : ");
    scanf("%d", &numChildren);
   childCredit = numChildren *2000;

  }

if(agi>0 && agi<=19900  ){

// 10 percent of agi

  tax = (10*agi)/(100);
  
  totalTax = tax - (childCredit);

 
}

else if(agi>=19901 && agi<=81050){

 calculation = (agi-19900);

 tax = ((12*calculation)/100) + 1990;

}

// i copy the above else if condition


else if(agi>=81051 && agi<=172750){

 calculation = (agi-81050);

 tax = ((22*calculation)/100) + 9328;

}


else if(agi>=172751 && agi<=329850){

 calculation = (agi-172750);

 tax = ((24*calculation)/100) + 29502;

}


else if(agi>=19901 && agi<=81050){

 calculation = (agi-19900);

 tax = ((12*calculation)/100) + 1990;

}


  //TODO: compute the tax, child credit, and total tax here

 printf("AGI:          $%.2lf\n\n", agi);
  printf("Tax:          $%.2lf\n\n", tax);
  printf("Child Credit: $%.2lf\n\n", childCredit);
  printf("Total Tax:    $%.2f\n\n", totalTax);

  return 0;
}
