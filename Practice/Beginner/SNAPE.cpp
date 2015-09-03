#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int TC, left, base;
	float right_min, right_max;

	ios_base::sync_with_stdio(false);

	cin >> TC;
	while (TC--) {
		cin >> base >> left;
		right_min = sqrt(left*left - base*base);
		right_max = sqrt(left*left + base*base);
		cout << right_min << " " << right_max << "\n";
	}

	return 0;
}
