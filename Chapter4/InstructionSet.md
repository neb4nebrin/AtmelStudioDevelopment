## 命令セット

`ATmega328P`で用いる`AVR Instruction Set`（AVR命令セット）の一覧を以下に示します。それぞれの詳細は後述します。

*Note: `AVR Instruction Set`は、全ての`AVR`で共通です。`ATmega328P`の場合は、この中から`ATmega328P`が利用出来る命令だけを使います。この`AVR Instruction Set`のマニュアル（英語）は、`Microchip`のHPでDLする事が出来ます。*

1. データ転送命令
   |ニーモニック|オペランド|備考|
   |:--:|:--|:--|
   |MOV|Rd, Rr|レジスタ間転送|
   |MOVW|Rd, Rr|レジスタ間ワード転送|
   |LDI|Rd, K|直値ロード|
   |LD|Rd, X(/Y/Z)|間接ロード|
   |LD|Rd, X(/Y/Z)+|間接ロード（ロード後インクリメント）|
   |LD|Rd, -X(/Y/Z)|間接ロード（ロード前デクリメント）|
   |LDD|Rd, Y(/Z)+q|ディスプレースメント付き間接ロード|
   |LDS|Rd, k|指定SRAMアドレスから直接ロード|
   |ST|X(/Y/Z), Rr|間接ストア|
   |ST|X(/Y/Z)+, Rr|間接ストア（ストア後インクリメント）|
   |ST|-X(/Y/Z), Rr|間接ストア（ストア前デクリメント）|
   |STD|Y(/Z)+q, Rr|ディスプレースメント付き間接ストア|
   |STS|k, Rr|指定SRAMアドレスへ直接ストア|
   |LPM|&nbsp;|プログラムメモリ（Flash）からR0へロード|
   |LPM|Rd, Z|プログラムメモリ（Flash）からロード|
   |LPM|Rd, Z+|プログラムメモリ（Flash）からロード（ロード後インクリメント|
   |SPM|&nbsp;|プログラムメモリへR1,R0の内容をストア|
   |IN|Rd, A||
   |OUT|A, Rr||
   |PUSH|Rr||
   |POP|Rd||

2. 算術論理演算命令
   |ニーモニック|オペランド|備考|
   |:--:|:--|:--|
   |ADD|Rd, Rr|&nbsp;|
   
3. 分岐命令
4. ビット操作・判断命令
5. MCU制御命令

