#include <stdio.h>
int main(void){
  int d, c, m;

  c = 0;
  for( m = 1; m <= ①; m++ ){
    scanf("%d", &d );
    if( ②>= 120 ){
      printf("OK\n");
      ③ = c + 1;
    }
  }
  printf("120以上のデータ個数%d\n", c );

  return 0;
}