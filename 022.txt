#include <stdio.h>
int main(void){
  int i;
  float t, s, a;

  s = 0.0;
  for( i = 1; i<= ①; i++ ){
    printf("正午の気温は?");
    scanf("%f", &t );
    s = ②;
  }
  a = ③ / 14.0;
  printf("平均気温は%f\n",a );
  
  return 0;
}