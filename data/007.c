#include <stdio.h>
int main(void){
  int h, n, i, m;

  printf("本数を入力=>");
  ①("%d", &h );
  printf("人数を入力=>");
  ①("%d", &n );
  i = h / n;
  m = h % n;
  printf( "一人あたりの本数=>%d\n", i );
  if( m == ② ){
    printf("余りはありません\n");
  }③{
    printf("余りの本数=>%d\n", m);
  }

  return 0;
}