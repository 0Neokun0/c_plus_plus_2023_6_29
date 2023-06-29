/*
あるゲームの id である文字列 S が与えられます。あるゲーム会社では id とそれ以外を区別するために id の最後に大文字の A を加えたものをデータベース用 id として使用しています。データベース用 id を出力してください。

入力例 1 の場合
neko
id である neko の最後に A を加えるので
nekoA
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    string input;
    cin >> input;

    cout << input << "A";

    return 0;
}