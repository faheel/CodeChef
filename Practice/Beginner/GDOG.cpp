#include <iostream>

using namespace std;

int main()
{
	int T, maxCoins, maxPeople, coins, people, p;

	ios_base::sync_with_stdio(false);

	cin >> T;
	while (T--)
	{
		cin >> maxCoins >> maxPeople;
		
		if (maxCoins < maxPeople)
			coins = maxCoins % maxPeople;
			
		else if (maxCoins % maxPeople == 0)
			coins = maxCoins-1 % maxPeople;
			
		else		
		{
			people = (maxCoins / 2) + 1;
			coins = maxCoins % people;
			
			if (people > maxPeople)
			{
				coins = 0;
				for (p = 2; p <= maxPeople; p++)
					if (maxCoins % p > coins)
						coins = maxCoins % p;
			}
		}
		
		cout << coins << "\n";
	}

	return 0;
}
