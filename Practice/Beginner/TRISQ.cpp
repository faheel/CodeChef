#include <iostream>

const int SIDE = 2;

using namespace std;

int main()
{
	int TC, base, squares;

	ios_base::sync_with_stdio(false);
	
	cin >> TC;
	while (TC--)
	{
		cin >> base;
		
		squares = (base/SIDE-1) * (base/SIDE) / 2;
			
		cout << squares << "\n";
	}

	return 0;
}

