#include <stdio.h>
int main(void){
  int a, b;
  
  printf("aを入力");
  scanf("%d", &a);
  printf("bを入力");
  scanf("%d", &b);
  ①( a > b ){
    printf("%d\n", a);
    printf("%d\n", b);
  }
  ②{
    printf("%d\n", b);
    printf("%d\n", ③);
  }
  
  
  return 0;
}