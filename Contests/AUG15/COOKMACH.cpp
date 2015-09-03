#include <iostream>
#include <cmath>

using namespace std;

bool isPowerOf2(int num) {
	int i;
	for (i = 0; num > pow(2, i); i++) ;
	if (pow(2, i) == num)
		return true;
	return false;
}

int main() {
	int TC, ops, i;
	long init, final;

	ios_base::sync_with_stdio(false);

	cin >> TC;
	while (TC--) {
		cin >> init >> final;
		
		ops = 0;
		while (init != final) {
			if (isPowerOf2(init)) {
				if (init < final) 
					init *= 2;
				else
					init /= 2;
			}
			else {
				if (init % 2 == 0)
					init /= 2;
				else
					init = (init-1) / 2;
			}
			ops++;
		}
		
		cout << ops << "\n";
		
	}

	return 0;
}
