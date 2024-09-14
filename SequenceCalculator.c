#include <stdio.h>
#include <stdlib.h>

int SequenceMax(int* a, int l) {
  int i, max=*a;
  for(i=0; i<l; i++) {
    if(max < *(a+i)) max =*(a+i);
  }
  return max;
}

int SequenceMin(int* a, int l) {
  int i, min=*a;
  for(i=0; i<l; i++) {
    if(min > *(a+i)) min = *(a+i);
  }
  return min;
}

int SequenceAve(int* a, int l) {
  int i, sum=0;
  for(i=0; i<l; i++) {
    sum += *(a+i);
  }
  return sum/l;
}

int main() {
  int i;
  
  int l=0;
  while(l<=0) {
    printf("数列の長さを入力してください ->");
    scanf("%d", &l);
    
    if(l>=1) break;
    printf("有効な長さではありません！\n");
  }
  
  int* a;
  a =  (int *)malloc(sizeof(int) * l);
  if(a == NULL) exit(0);
  
  for(i=0; i<l; i++) {
    printf("数列の %d つ目の要素を入力 ->", i+1);
    scanf("%d", &*(a+i));
  }
  
  for(i=0; i<l; i++) {
    printf("%d ", *(a+i));
  }
  
  printf("最大値は %d\n", SequenceMax(a, l));
  printf("最小値は %d\n", SequenceMin(a, l));
  printf("平均値は %d\n", SequenceAve(a, l));
  
  free(a);
  return 0;
}
