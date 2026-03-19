//#include<iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//int a[N], b[N];
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &a[i]);
//        b[i] = a[i] - a[i - 1];
//    }
//
//    while (m--)
//    {
//        int l, r, c;
//        cin >> l >> r >> c;
//        b[l] += c;
//        b[r + 1] -= c;
//    }
//
//    for (int i = 1; i <= n; i++)
//    {
//        a[i] = b[i] + a[i - 1];
//        printf("%d ", a[i]);
//    }
//    return 0;
//}