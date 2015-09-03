#include <iostream>

using namespace std;

int main()
{
	int TC, num, occ;

	ios_base::sync_with_stdio(false);
	
	cin >> TC;
	while (TC--)
	{
		cin >> num;
		occ = 0;
		while (num > 3)
		{
			if (num % 10 == 4)
				occ++;
			num /= 10;
		}
		cout << occ << "\n";
	}

	return 0;
}

