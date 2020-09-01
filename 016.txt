#include <stdio.h>
int main(void){
  int k;
  float a, f;

  printf("タイムを入力=>");
  scanf("%f", &a);
  f = ①;
  for( k = ②; k <= 10; k++ ){
    printf("タイムを入力=>");
    scanf("%f", &a);
    if( f ③ a ){
      f = a;
    }
  }
  printf("最も速いタイム => %f\n", f);
  
  return 0;
}