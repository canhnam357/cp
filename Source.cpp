//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//int32_t main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	int ans = 6;
//	string s;
//	cin >> s;
//	for (int i = 0; i < 1000000; i++)
//	{
//		string t = to_string(i);
//		while (t.length() < 6) t = '0' + t;
//		if (t[0] + t[1] + t[2] == t[3] + t[4] + t[5])
//		{
//			int cnt = 0;
//			for (int j = 0; j < 6; j++) cnt += s[j] != t[j];
//			ans = min(ans, cnt);
//		}
//	}
//	cout << ans;
//	return 0;
//}