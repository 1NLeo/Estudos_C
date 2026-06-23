#include <stdio.h>
#define reset   "\033[0m"
#define green   "\033[32m"
int main () {

      int x = 0, y = 0, add = 0, sub = 0, div = 0, mult = 0;
      
      printf ("Type a nnumber: ");
      scanf ("%d", &x);

      printf ("Type another number:  ");
      scanf ("%d", &y);

      add = x + y;
      sub = x - y;
      div = x / y;
      mult = x * y;

      printf (green "Results: \n" reset);

      printf ("The addition is equal to: " green "%d" reset "\n", add);
      printf ("The subtraction is equal to: "  green "%d" reset "\n", sub);
      printf ("The multiplication is equal to: " green "%d" reset "\n", mult);
      printf ("The division is equal to: " green "%d" reset "\n", div);




    return 0;
}