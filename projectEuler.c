#include <stdio.h>

int main() {

  //Multiples of 3 and 5
  int x = 999;
  int ret = 0;

  while (x) {
    if ( x % 5 == 0 ) {
      ret += x;
    }
    else if ( x % 3 == 0 ) {
      ret += x;
    }
    x--;
  }

  printf(" %d ", ret);

  //

}
