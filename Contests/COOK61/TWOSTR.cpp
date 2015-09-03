#include <iostream>

using namespace std;

int main()
{
	int TC, i;
	bool match;
	string str1, str2;

	ios_base::sync_with_stdio(false);

	cin >> TC;
	while (TC--)
	{
		cin >> str1 >> str2;
		
		match = true;
		for (i = 0; i < str1.length(); i++)
			if (str1[i] != '?' && str2[i] != '?' && str1[i] != str2[i])
			{
				match = false;
				break;
			}
		
		if (match)
			cout << "Yes\n";
		else
			cout << "No\n";
	}

	return 0;
}
