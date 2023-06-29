/*
A 君は 1 日目に A メートル、2 日目に B メートル走りました。
A 君が 2 日間で走った距離を求めてください。

入力例 1 の場合
210
190
1 日目に 210 メートル、2 日目に 190 メートル走るため、2 日間で 400 メートル走ることになります。
400
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