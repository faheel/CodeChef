#include <iostream>
#include <climits>

using namespace std;

int main(){
	int TC, size, num, min1, min2;

	ios_base::sync_with_stdio(false);
	
	cin >> TC;
	while (TC--) {
		cin >> size;
		
		min1 = min2 = INT_MAX;
		while (size--) {
			cin >> num;
			if (num < min1) {
				min2 = min1;
				min1 = num;
			}
			else if (num < min2)
				min2 = num;
		}
		
		cout << (min1+min2) << "\n";
	}

	return 0;
}
