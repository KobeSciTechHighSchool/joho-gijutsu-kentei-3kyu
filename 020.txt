#include <stdio.h>
int main(void){
  float r1, r2, a, b;

  printf("r1 = ");
  ①("%f", &r1);
  printf("r2 = ");
  ①("%f", &r2);
  a = r1 + r2;
  b = ② / a;
  printf("直列接続時は%f\n", a );
  printf("並列接続時は%f\n", ③ );
  
  return 0;
}