#include <iostream>
#include <vector>

using namespace std;

int switches;
int switch() {
	switches++;
}

int main() {
	int TC;
	vector <string> lanes(2);
	
	ios_base::sync_with_stdio(false);
	
	cin >> TC;
	cin.get();
	while (TC--) {
		getline(cin, lanes[0]);
		getline(cin, lanes[1]);
		
	}
	
	return 0;
}

/*int bestLane(string* lane) {
	int blocks[] = {0, 0}, i, j;
	for (i = 0; i < 2; i++)
		for (j = 0; lane[i][j] != '\0'; j++)
			if (lane[i][j] == '.')
				blocks[i]++;
	return ((blocks[0] >= blocks[1]) ? 0 : 1);
}

int main() {
	int TC, pos, i;
	long switches;
	bool will_reach;
	string lane[2];

	ios_base::sync_with_stdio(false);

	cin >> TC;
	cin.get();
	while (TC--) {
		getline(cin, lane[0]);
		getline(cin, lane[1]);
		
		switches = 0;
		if (lane[0][0] == '.') {
			if (lane[1][0] == '.')
				pos = bestLane(lane);
			else
				pos = 0;
		}
		else if (lane[1][0] == '.')
			pos = 1;
		else {
			cout << "No\n";
			continue;
		}
			
		will_reach = true;	
		for (i = 0; i < lane[0].size(); i++) {
			if (lane[pos][i] == '#') {
				if (lane[(pos+1) % 2][i] == '.') {
					pos = (pos+1) % 2;
					switches++;
				}
				else {
					will_reach = false;
					cout << "No\n";
					break;
				}
			}
		}
		if (will_reach) {
			cout << "Yes\n" << switches << "\n";
		}
	}

	return 0;
} */
