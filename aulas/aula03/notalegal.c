#include <stdio.h>

int main() {  

  
  printf("\x1b[31m--------------------------\n");
  printf("    N O T A  L E G A L     \n");
  printf("---------------------------\x1b[0m\n");
  printf("\x1b[35mITEM             QTD  VALOR\x1b[0m\n");
  printf("\x1b[36m%-16s %03i %6.2f\x1b[0m\n" , "Banana nanica", 2 , 20.00);
  printf("\x1b[34m%-16s %03i %6.2f\x1b[0m\n" , "Uva globo",  1 , 15.00);
  printf("\x1b[37m%-16s %03i %6.2f\x1b[0m\n" , "Laranja lima", 1 , 18.00);
  
//  printf("Banana nanica    2    20.00\n");
//  printf("Uva globo        1    15.00\n");
//  printf("Laranja lima     1    18.00\n");
  
  printf("\x1b[30m---------------------------\n");
  printf("TOTAL              %8.2f\x1b[0m\n",  73.00);

  
   return 0;
}