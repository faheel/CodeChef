#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int T, size, i;
	long long num, min;

	ios_base::sync_with_stdio(false);

	cin >> T;
	while (T--)
	{
		cin >> size;
		
		min = LLONG_MAX;
		for (i = 0; i < size; i++)
		{
			cin >> num;
			if (num < min)
				min = num;
		}
		
		cout << (min * (size-1)) << "\n";
		
	}

	return 0;
}
