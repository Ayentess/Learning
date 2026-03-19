//#include<iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//int s[N], a[N];//s用来记录重复的数字次数
//
//int main()
//{
//    int n, res = 0;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//
//    for (int i = 0, j = 0; i < n; i++)
//    {
//        s[a[i]]++;//将出现次数加1
//        while (s[a[i]] > 1)//当次数大于一时，也就是有重复数字时，
//        {
//            s[a[j]]--;
//            j++;//将j前移，并且将区间中重复出现的次数减去直到j指向没有重复的元素
//        }
//
//        res = max(res, i - j + 1);
//    }
//
//    cout << res << endl;
//
//    return 0;
//}