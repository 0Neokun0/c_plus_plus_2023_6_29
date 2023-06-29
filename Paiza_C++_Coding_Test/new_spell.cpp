/*
A 君は呪文 B と呪文 C を合わせた新しい呪文を唱えようとしてます。新しい呪文は呪文 B の後ろに呪文 C を足したものです。新しい呪文を出力してください。
入力例 1 の場合
neko
fumu
neko に fumu を足したものなので。
nekofumu
と出力してください。
*/
#include <iostream>

using namespace std;

int main()
{
    string input1;
    string input2;

    cin >> input1;
    cin >> input2;

    cout << input1 << input2;

    return 0;
}