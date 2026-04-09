//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//typedef pair<int, int> PII;
//vector<PII> segs;
//
//void merge(vector<PII>& segs)
//{
//	vector<PII> res;
//
//	sort(segs.begin(), segs.end());
//	int st = -2e9, ed = -2e9;
//	for (auto item : segs)
//	{
//		if (ed < item.first)
//		{
//			if (st != -2e9)
//			{
//				res.push_back({ st, ed });
//			}
//			st = item.first;
//			ed = item.second;
//		}
//		else
//		{
//			ed = max(ed, item.second);
//		}
//	}
//
//	if (st != -2e9)
//	{
//		res.push_back({ st, ed });
//	}
//
//	segs = res;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int l, r;
//		cin >> l >> r;
//		segs.push_back({ l, r });
//	}
//
//	merge(segs);
//
//	cout << segs.size() << endl;
//
//	return 0;
//
//}