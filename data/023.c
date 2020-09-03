#include <stdio.h>
int main(void){
  int i, j, k, amari;

  i = 0;
  j = 0;
  for( k = 1; k <= ①; k++ ){
    amari = k % 2;
    if( amari != 0 ){
      i = i + k;
    }
    ②{
      j = j + ③;
    }
  }
  printf("奇数の合計%d 偶数の合計%d\n",i ,j );
  
  return 0;
}