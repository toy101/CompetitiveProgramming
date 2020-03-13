# Atcoder Beginner Contest 158 C
> [問題ページ](https://atcoder.jp/contests/abc158/tasks/abc158_c)
## 解法
どの範囲の整数が8%の税率で求める消費税になるか考え、その範囲で小さい順に10%の税率で求める消費税に一致するものを探す.
## 実装の注意点
割り算の切り捨て、切り上げに注意しないと死ぬ.
- 切り捨て
    - `int`でキャスト
- 切り上げ
    - `ceil` <math.h>
