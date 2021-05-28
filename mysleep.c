#include <stdio.h>
#include <signal.h>
#include <unistd.h>

// 必要なら，ここにシグナルハンドラ関数を追加する

unsigned int mysleep(unsigned int seconds) {

  // ここにプログラムを追加して完成させる

}

// テストドライバ（mysleep関数をテストするための仮のmain関数）
int main() {
  for (;;) {
    printf("hello\n");
    mysleep(1);
  }
  return 0;
}

/* 実行例
$ make                <---- コンパイルエラーや警告がないことを確認
$ ./mysleep
hello                 <---- hello が一秒に一度表示される．
hello
hello
hello
hello
^C                    <---- Ctrl-C でプログラムを終了する．
$
*/
