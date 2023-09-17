#include <stdio.h>
#include <math.h> // 平方根に必要

int main() {
  int a, b;
  double distance = 0;
  
  // 新居浜高専のキャンパスマップを基に、だいだいの座標を算出している
  // 北東の隅を(0,0) 、南西の隅を(9,9) とする 
  double position[10][2] = {
    {5,5}, {4,4}, {9,2}, {9,3}, {7,3},
    {6,3}, {9,1}, {3,7}, {1,5}, {2,8}
  };
  
  printf("私は 新居浜高専 移動サポートプログラム です\n");
  printf("以下の表に従って、移動元と移動先の棟を 半角区切りで教えてください\n");
  
  printf("M棟[0] E棟[1] D棟[2] C棟[3] Z棟[4]\n");
  printf("一般棟[5] 専攻科棟[6] 図書館棟[7] 尚友会館[8] 寮[9]\n");
  printf("-> ");
  
  while(1) {
    scanf("%d %d", &a, &b);
    if(a>=0 && a<=9 && b>=0 && b<=9 && a!=b) break;
    
    printf("正しく入力してください！\n");
  }
  
  printf("[%d]と[%d]の距離 ですね…\n", a, b);
  
  // ユークリッド距離を配列のデータを基に算出する
  // 新居浜高専の敷地面積は およそ10万m^2
  // √10万 = 316 、10で割った値の 31.6 を かけている
  distance =  sqrt(pow(position[a][0]-position[b][0],2) + pow(position[a][1]-position[b][1],2))*31.6;
  
  printf("%lf mぐらいだと思われます！", distance);
  
  return 0;
}