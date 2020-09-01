#include <stdio.h>
int main(void){
  int a, n;
  
  printf("数値を入力してください：");
  ①("%d", &a);
  ②( n = 1; n <= a; n++ ){
    printf("*");
    if( n%10 == ③ ){
      printf(" ");
    }
  }
  return 0;
}