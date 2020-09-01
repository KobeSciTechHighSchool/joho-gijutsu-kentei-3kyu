#include <stdio.h>
int main(void){
  int c, m, d;

  c = 0;
  for( m = 1; m <= ①; m++ ){
    scanf("%d", ② );
    if( d>100 ){
      printf("エラー%d\n", d );
      ③ = c + 1;
    }
  }
  printf("エラーの個数 => %d\n", c );

  return 0;
}