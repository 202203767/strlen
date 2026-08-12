概要

本プログラムはC言語の標準ライブラリstrlenを実装したものです。
strlen1.cとstrlen2.cはどちらも同じ実行結果を示します。
しかし、それぞれで書き方が異なります。
strlen1.cはmein関数内にすべての処理をまとめたもの。
strlen2.cはmy_strlenを作成し、汎用性の高いものにしている。

使い方（strlen1.cとstrlen2.cどちらも使い方は同じ）
※input_charをダウンロードしてから実行すること。
※本リポジトリについてはinput_charは入っていないのでinput_charをcloneしてから本リポジトリをcloneすること。

$ gcc strlen1.c ../input_char/input_char.c
$ ./a.out
文字を入力してください:apple
文字列の長さは（strlen関数使用）:5
文字列の長さは（strlen関数未使用）:5
$ ./a.out
文字を入力してください:リンゴ
文字列の長さは（strlen関数使用）:9
文字列の長さは（strlen関数未使用）:9
