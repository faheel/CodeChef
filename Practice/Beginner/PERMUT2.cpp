#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, i;
	bool match;
	vector <int> perm, inv_perm;
	
	ios_base::sync_with_stdio(false);
	
	while (cin >> N, N) {
		perm.resize(N);
		inv_perm.resize(N);
		for (i = 0; i < N; ++i) {
			cin >> perm[i];
			inv_perm[perm[i]-1] = i+1;
		}
		
		match = true;
		for (i = 0; i < N; ++i)
			if (perm[i] != inv_perm[i]) {
				match = false;
				break;
			}
		if (match)
			cout << "ambiguous\n";
		else
			cout << "not ambiguous\n";
	}
	
	return 0;
}
