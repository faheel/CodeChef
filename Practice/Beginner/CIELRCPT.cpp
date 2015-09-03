#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int TC, total, dishes, i;

	ios_base::sync_with_stdio(false);

	cin >> TC;
	while (TC--) {
		cin >> total;
		
		dishes = 0;
		for (i = 11; i >= 0; i--) {
			dishes += total / pow(2, i);
			total %= int(pow(2, i));
		}
		
		cout << dishes << "\n";
	}

	return 0;
}
