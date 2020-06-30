# mysleep関数の作成

```sleep()```システムコールを用いないで，
指定の秒数プログラムを待ち状態にする関数
```mysleep(int seconds)```を作りなさい．

### コンパイル方法
```Makefile```を準備してあるので```make```コマンドでコンパイルできる．

```
$ make
cc -Wall -std=c99 -o mysleep mysleep.c
cc -Wall -std=c99 -o signalTest signalTest.c
$
```
