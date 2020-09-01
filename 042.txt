#include <stdio.h>
int main(void){
  ① a, b;

  printf("長さを入力？");
  scanf("%f", &a);
  ② = a / 2.54;
  ③("%fcmは%fインチ\n", a, b );
  
  return 0;
}