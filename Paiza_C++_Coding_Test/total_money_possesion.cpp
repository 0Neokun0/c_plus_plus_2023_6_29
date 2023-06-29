/*
A 君の所持金は a 円です。また B 君の所持金は b 円です。A 君と B 君の合計の所持金は何円ですか？

入力例 1 の場合
180
150
A 君の所持金の 180 円と B 君の所持金の 150 円を合計して 330 円なので
330
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int sum;
 
    cin >> x;

    cin >> y;
    sum = x + y;
    cout << sum;

    return 0;
}