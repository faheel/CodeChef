#include <iostream>
#include <vector>

using namespace std;

int main()
{
	short T, files, ignored, tracked, fileNum, i, both, none;
	vector <short> fileList;

	ios_base::sync_with_stdio(false);

	cin >> T;
	while (T--)
	{
		fileList.clear();
		cin >> files >> ignored >> tracked;
		
		fileList.resize(files, 0);
		for (i = 0; i < (ignored+tracked); i++)
		{
			cin >> fileNum;
			fileList[fileNum-1]++;
		}
		
		both = none = 0;
		for (i = 0; i < files; i++)
		{
			if (fileList[i] == 2)
				both++;
			else if(fileList[i] == 0)
				none++;
		}
		
		cout << both << " " << none << "\n";
	}

	return 0;
}

