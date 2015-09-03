#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
	short T, i;
	array <int, 26> histo;
	string str;

	ios_base::sync_with_stdio(false);

	cin >> T;
	while (T--)
	{
		cin >> str;
		
		histo.fill(0);
		for (i = 0; i < str.length(); i++)
			histo[str[i]-'a']++;
			
		sort(histo.begin(), histo.end());
		
		/*
		for (auto e: histo)
			cout << e << " ";
		cout << "\n";
		*/
	}

	return 0;
}
