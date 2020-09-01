#include <stdio.h>
int main(void){
  int a, b, c, max;

  printf("aを入力=>");
  scanf("%d", &a);
  printf("bを入力=>");
  scanf("%d", &b);
  printf("cを入力=>");
  scanf("%d", &c);
  ① = a;

  if( max < b ){
    max = b;
  }
  if( max ② c ){
    max = c;
  }
  printf("最も大きな値は => %d\n", ③ );
  
  return 0;
}