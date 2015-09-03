#include <iostream>

using namespace std;

int main() {
	int test_cases, cupcakes, package;
		
	ios_base::sync_with_stdio(false);
	
	cin >> test_cases;
	while (test_cases--) {
		cin >> cupcakes;
		package = cupcakes/2 + 1;
		cout << package << "\n";
	}
	
	return 0;
}
