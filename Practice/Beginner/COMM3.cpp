#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int main(){
	short TC, maxDist, i, j;
	array <array <short, 2>, 3> pos;
	array <float, 3> dist;
	
	ios_base::sync_with_stdio(false);
	
	cin >> TC;
	while (TC--) {
		cin >> maxDist;
		
		for (i = 0; i < 3; i++)
			for (j = 0; j < 2; j++)
				cin >> pos[i][j];
		
		dist[0] = sqrt(pow(pos[1][0]-pos[0][0], 2) + pow(pos[1][1]-pos[0][1], 2));		// distance between B and A
		dist[1] = sqrt(pow(pos[2][0]-pos[1][0], 2) + pow(pos[2][1]-pos[1][1], 2));		// distance between C and B
		dist[2] = sqrt(pow(pos[2][0]-pos[0][0], 2) + pow(pos[2][1]-pos[0][1], 2));		// distance between C and A
		
		if ((dist[0] <= maxDist && dist[1] <= maxDist)
				|| (dist[1] <= maxDist && dist[2] <= maxDist)
				|| (dist[0] <= maxDist && dist[2] <= maxDist))
			cout << "yes\n";
		else
			cout << "no\n";
	}

	return 0;
}
