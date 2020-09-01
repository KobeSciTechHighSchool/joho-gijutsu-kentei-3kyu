#include <stdio.h>
int main(void){
  ① j, s, t;
  float a;
  
  t = 0;
  for( j = 1; j<= 5; j++ ){
    printf("身長は：");
    ②("%d", &s);
    t = ③;
  }
  a = (float)t/5.0;
  printf("平均身長は%f\n", a);
  
  return 0;
}