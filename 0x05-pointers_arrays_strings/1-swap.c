#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap two integers vlaues
 * a@: first integer
 * @b: second integer
 * return: nothing
 */

void swap_int(int *a, int *b)
 { 
   int tmp = *a;

   *a = *b;
   *b =tmp;   
      
  }
