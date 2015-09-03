#include <iostream>

using namespace std;

int main()
{
	short T, N, H, a, b;

	ios_base::sync_with_stdio(false);

	cin >> T;
	while (T--)
	{
		cin >> N;
		H = 0;
		while (N--)
		{
			cin >> a >> b;
			H ^= N+1;
		}
		cout << H << "\n";
	}

	return 0;
}
