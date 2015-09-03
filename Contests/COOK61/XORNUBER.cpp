#include <iostream>
#include <climits>

using namespace std;

int main()
{
	short T;
	long N, x;

	ios_base::sync_with_stdio(false);

	cin >> T;
	while (T--)
	{
		cin >> N;
		if (((N+1) & N) == 0)
			x = (N >> 1);
		else
			x = -1;
		if (N == 1)
			x = 2;
		cout << x << "\n";
	}

	return 0;
}
