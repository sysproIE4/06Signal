# mysleep関数の作成

```sleep()```システムコールを用いないで，
指定の秒数プログラムを待ち状態にする関数
```mysleep(int seconds)```を作りなさい．

### コンパイル方法
```Makefile```を準備してあるので```make```コマンドでコンパイルできる．

```Makefile```には```-Wall```オプション付きでコンパイルするような指示が記述してある．<br>
```cc```は，```-Wall```オプションが指定されると，より多くの警告を表示してくれる．<br>
コンパイル時にプログラムの問題をなるべくたくさん見つけるために，<br>
```cc```コマンドを使用しないで```make```でコンパイルするように！<br>
（```cc```に自分で```-Wall```をつけても実行しても良いが．．．）

```
$ make
cc -Wall -std=c99 -o mysleep mysleep.c
cc -Wall -std=c99 -o signalTest signalTest.c
$
```
