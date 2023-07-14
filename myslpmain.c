#include <stdio.h>
#include <signal.h>
#include "mysleep.h"       // mysleep.c が公開している関数のプロトタイプ宣言

// テストドライバ（mysleep関数をテストするための仮のmain関数）
// 必要に応じてテスト内容を工夫すること

// ^Cで終了するかどうかテストするため
static void intHandler(int n) { }            // 外部に見えないようにstatic

// テスト用のmain関数
int main() {
  // 0秒から3秒までのsleepテスト
  for (int i=0;i<=3;i++) {
    printf("%d秒スリープ開始\n", i);
    int r = mysleep(i);
    printf("スリープ終了（残り時間%d秒）\n", r);
  }

  // sleep中にシグナルを受信した場合のテスト
  signal(SIGINT, intHandler);                // ^C用ハンドラを登録
  printf("これから10秒スリープします．\n");
  printf("その間に^Cを入力すると残り時間を表示して終了します．\n");
  printf("\n残り時間%d秒\n", mysleep(10));
  return 0;
}

/* 実行例
%  make
cc -Wall -std=c99 -o myslpmain myslepmain.c mysleep.c  <--- エラー・警告なし
% ./myslpmain
0秒スリープ開始
スリープ終了（残り時間0秒）                  <--- ０秒スリープ動作確認OK
1秒スリープ開始
スリープ終了（残り時間0秒）
2秒スリープ開始
スリープ終了（残り時間0秒）
3秒スリープ開始
スリープ終了（残り時間0秒）
これから10秒スリープします．
その間に^Cを入力すると残り時間を表示して終了します．
^C
残り時間7秒                                  <--- シグナルで終了の場合OK
*/
