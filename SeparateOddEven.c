#include <stdio.h>
#include <stdlib.h>

void evenPicking(int* a, int l) {
  
  printf("偶数: ");
  
  for(int i=0; i<l; i++) {
    if(*(a+i)%2 == 0) printf("%d, ",  *(a+i));
  }
}

void oddPicking(int* a, int l) {
  
  printf("奇数: ");
  
  for(int i=0; i<l; i++) {
    if(*(a+i)%2 == 1) printf("%d, ",  *(a+i));
  }
}


int main() {
  int i;
  
  int l=0;
  while(l<=0) {
    printf("数列の長さを入力してください ->");
    scanf("%d", &l);
    
    if(l>=1) break;
    printf("自然数を入力してください！\n");
  }
  
  int* a;
  a =  (int *)malloc(sizeof(int) * l);
  if(a == NULL) exit(0);
  
  for(i=0; i<l; i++) {
    printf("数列の %d つ目の数値を入力 ->", i+1);
    scanf("%d", &*(a+i));
  }
  
  for(i=0; i<l; i++) {
    printf("%d ", *(a+i));
  }
  
  evenPicking(a, l);
  oddPicking(a, l);
  
  
  return 0;
}