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
  double childCredit;
  double totalTax = 0.0;
  double numChildren;

  double calculation;
  double a;
  

  printf("\nPlease enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);
  //remove the "enter" endline character

  getchar();

  printf("\n\nDo you have any children? (Y) or (N)? : ");

  c=getchar();

  if(c == 'y' || c == 'Y') {

    printf("\n\nHow many children do you have? : ");
    scanf("%lf", &numChildren);

      a=numChildren;

    childCredit = a *2000;
   

  }


if(agi>0 && agi<=19900  ){

// 10 percent of agi
 

  tax = (10*agi)/(100);
  
  totalTax = tax - childCredit;

 
}

else if(agi>=19901 && agi<=81050){

   

 calculation = (agi-19900);

 tax = ((12*calculation)/100) + 1990;

  totalTax = tax - childCredit;

}

// i copy the above else if condition


else if(agi>=81051 && agi<=172750){

   

   

 calculation = (agi-81050);

 tax = ((22*calculation)/100) + 9328;

 totalTax = tax - childCredit;
}


else if(agi>=172751 && agi<=329850){

   

 calculation = (agi-172750);

 tax = ((24*calculation)/100) + 29502;

 totalTax = tax - childCredit;
}


else if(agi>=329851 && agi<=418850){

  

 calculation = (agi-329850);

 tax = ((32*calculation)/100) + 67206;

  totalTax = tax - childCredit;

}


else if(agi>=418851 && agi<=628300){

   

 calculation = (agi-418850);

 tax = ((35*calculation)/100) + 95686;

  totalTax = tax - childCredit;

}

else if(agi>=628301){

   

 calculation = (agi-628300);

 tax = ((37*calculation)/100) + 168933.50;

  totalTax = tax - childCredit;

}




  //TODO: compute the tax, child credit, and total tax here

 printf("\n\nAGI:          $%.2lf\n\n", agi);
  printf("Tax:          $%.2lf\n\n", tax);
  printf("Child Credit: $%.2lf\n\n", childCredit);
  printf("Total Tax:    $%.2f\n\n", totalTax);

  return 0;
}
