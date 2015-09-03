#include <iostream>
#include <vector>

using namespace std;

short GCD (short a, short b) {
	if (a % b == 0)
		return b;
	return GCD(b, a%b);
}

int main() {
	short TC, N, i, num, gcd;
	vector <short> ingred;

	ios_base::sync_with_stdio(false);

	cin >> TC;
	while (TC--) {
		ingred.resize(0);
		
		cin >> N;
		for (i = 0; i < N; i++) {
			cin >> num;
			ingred.push_back(num);
		}
		
		gcd = ingred[0];
		for (i = 1; i < N; i++)
			gcd = GCD(gcd, ingred[i]);	
		
		for (i = 0; i < N; i++) {
			ingred[i] /= gcd;
			cout << ingred[i] << " ";
		}
		cout << "\n";
	}

	return 0;
}
