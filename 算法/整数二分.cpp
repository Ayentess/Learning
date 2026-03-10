//#include<iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//int q[N];
//
//int main()
//{
//	int n,m;
//	scanf("%d %d", &n,&m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &q[i]);
//	}
//
//	while (m--)
//	{
//		int k;
//		scanf("%d", &k);
//
//		int l = 0, r = n - 1;
//		while (l < r)
//		{
//			int mid = l + r >> 1;
//			if (q[mid] >= k)r = mid;
//			else l = mid + 1;
//		}
//
//		
//		if (q[r] == k)
//		{
//			printf("%d ", l);
//			r = n - 1;
//			while (l < r)
//			{
//				int mid = l + r + 1 >> 1;
//				if (q[mid] <= k)l = mid;
//				else r = mid - 1;
//			}
//			printf("%d\n", l);
//		}
//		else 
//		{
//			printf("-1 -1\n");
//		}
//
//	}
//	return 0;
//}


