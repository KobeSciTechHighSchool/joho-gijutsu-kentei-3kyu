#include <stdio.h>
int main(void){
  int k, n, a;
  
  for( k = 0; k < 10; ① ){
    printf("数を入力");
    scanf("%d", &n);
    a = n % 2;
    if( a ② 1 ){
      printf("奇数\n");
    }
    ③{
      printf("偶数\n");
    }
  }
  
  return 0;
}