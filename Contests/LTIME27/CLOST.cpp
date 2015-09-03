#include <iostream>
#include <vector>

using namespace std;

int main()
{
	bool closed;
	short T, len, Q, i, x, y;
	vector <char> expr;

	ios_base::sync_with_stdio(false);

	cin >> T;
	while (T--)
	{
		cin >> len >> Q;
		
		expr.resize(len);
		closed = true;
		for (i = 0; i < len; i++)
		{
			if (closed)
				expr[i] = '(';
			else
				expr[i] = ')';
			closed = !closed;
		}
		
		while (Q--)
		{
			cin >> x >> y;
			if (x < y)
			{
				closed = true;
				while (x <= y)
				{
					if (closed)
						expr[x] = '(';
					else
						expr[x] = ')';
					closed = !closed;
					x++;
				}
			}
			else
			{
				closed = true;
				while (y <= x)
				{
					if (closed)
						expr[y] = '(';
					else
						expr[y] = ')';
					closed = !closed;
					y++;
				}
			}
		}
		
		for (auto c: expr)
				cout << c;
			cout << "\n";
	}

	return 0;
}
