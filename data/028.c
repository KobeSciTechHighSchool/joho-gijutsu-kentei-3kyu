#include <stdio.h>
int main(void){
  int n, a;
  
  n = 0;
  printf("数値を入力してください：");
  scanf("%d", &a );
  ①( a >= 3 ){
    a = a -3;
    n = ②;
  }
  printf("回数 = %d\n", ③);

  return 0;
}