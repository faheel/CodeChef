#include <iostream>

using namespace std;

enum { INDIAN, NOT_INDIAN, NOT_SURE };

int main(){
	short TC, len, i;
	string gestures;
	int category;

	ios_base::sync_with_stdio(false);
	
	cin >> TC;
	while (TC--) {
		cin >> len;
		cin >> gestures;
		
		category = NOT_SURE;
		for (i = 0; i < len; i++) {
			if (gestures[i] == 'I') {
				category = INDIAN;
				cout << "INDIAN\n";
				break;
			}
			else if (gestures[i] == 'Y') {
				category = NOT_INDIAN;
				cout << "NOT INDIAN\n";
				break;
			}
		}
		
		if (category == NOT_SURE)
			cout << "NOT SURE\n";
	}

	return 0;
}
