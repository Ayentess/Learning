#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin >> n>>k;

	int res = n >> k & 1;//n右移k位后与1进行与运算，得到的结果就是n的第k位

	cout << res << endl;
	return 0;
}