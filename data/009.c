#include <stdio.h>
#include <math.h>
int main(void){
  float x, y, z, k, s;

  printf("xを入力");
  ①("%f", &x );
  printf("yを入力");
  ①("%f", &y );
  printf("zを入力");
  ①("%f", &z );
  k = ( ② )/2.0;
  s = sqrt( k*(k-x)*(k-y)*(k-z) );
  printf("面積=%f\n", ③ );

  return 0;
}