#include <stdio.h>
int main(void){
  ① i;
  float t, s, a;

  s = 0.0;
  for( i = 1; i <= 10; i++ ){
    printf("気温は？");
    ②("%f", &t );
    s = ③;
  }
  a = s / 10.0;
  printf("平均気温は%f\n", a);
  
  return 0;
}