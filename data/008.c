#include <stdio.h>
int main(void){
  int k, m, total;

  total = ①;
  ②( k=1; k<40; k++ ){
    printf("整数を入力=>");
    scanf("%d", &m );
    ③( m > 0 ){
      total = total + m;
    }
  }
  printf("合計=>%d\n", total );

  return 0;
}