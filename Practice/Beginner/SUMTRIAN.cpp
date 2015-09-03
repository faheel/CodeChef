#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T, N, i, j, input;
	vector <int> cols;
	vector <vector <int> > rows;
	
	ios_base::sync_with_stdio(false);
	
	cin >> T;
	
	while (T--) {
		cin >> N;
		
		for (i = 0; i < N; ++i) {
			cols.resize(0);
			for (j = 0; j <=i; ++j) {
				cin >> input;
				cols.push_back(input);				
			}
			rows.push_back(cols);
		}
		
		for (i = N-2; i >=0; --i)
			for (j = 0; j <= i; ++j) {
				rows[i][j] += (rows[i+1][j] > rows[i+1][j+1]) ? rows[i+1][j] : rows[i+1][j+1];
			}
		
		cout << rows[0][0] << "\n";
		rows.resize(0);
	}
	
	return 0;
}
