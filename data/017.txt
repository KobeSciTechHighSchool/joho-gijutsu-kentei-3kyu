#include <stdio.h>
int main(void){
  int n, t;

  ①("何段=>");
  scanf("%d", &n);
  t = n ② + 3 * n;
  printf("必要な本数は=>%d\n", t );
  
  return 0;
}