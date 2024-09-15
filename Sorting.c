// 参考: 
// https://www.codereading.com/algo_and_ds/algo/bubble_sort.html

#include <stdio.h>
#include <stdlib.h>

void showing(int* array, int size) {
  int i;
  for(i=0; i<size; i++) {
    printf("%5d, ", *(array+i));
  }
  printf("\n");
}

void sorting(int* array, int size) {
  int i, j, temp;

  for (i=0; i<size-1; i++) {
    for (j=size-1; j>i; j--) {
      if (*(array+j-1) > *(array+j)) {
        temp = *(array+j-1);
        *(array+j-1) = *(array+j);
        *(array+j) = temp;
      }
    }
    showing(array, size);
  }
}

int main() {
  int i;
  
  int size=0;
  while(size<=0) {
    printf("ソートしたい数列の長さを入力してください -> ");
    scanf("%d", &size);
    
    if(size>=1) break;
    printf("正の数を入力してください\n");
  }
  
  int* array;
  array = (int *)malloc(sizeof(int) * size);
  if(array == NULL) exit(0);
  
  int temp=1000;
  for(i=0; i<size; i++) {
    printf("数列の %d つ目の要素を入力 ->", i+1);
    scanf("%d", &*(array+i));
  }
  
  showing(array, size);
  sorting(array, size);
  
  printf("ソート完了！");
  
  free(array);
  return 0;
}