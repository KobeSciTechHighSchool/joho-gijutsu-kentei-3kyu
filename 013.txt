#include <stdio.h>
int main(void){
  int m, wa;

  wa = 0;
  ①( m = ②; m <= 99; m = m + 2 ){
      wa = ③ + m;
  }
  printf("奇数の和=%d\n", wa );

  return 0;
}