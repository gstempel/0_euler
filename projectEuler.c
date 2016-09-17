#include <stdio.h>

int prob1() {
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
  return ret;
}

int prob2() {
  //Even Fibonacci numbers
  int x = 1;
  int y = 2;
  int temp = 0;
  int ret = 0;

  while (y < 4000000) {
    if (y % 2 == 0) {
      ret += y;
    }
    temp = y;
    y += x;
    x = temp;
  }
  return ret;
}

int main() {

  printf("Problem One: %d \n", prob1());
  printf("Problem Two: %d \n", prob2());

}
