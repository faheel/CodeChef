#include <iostream>
#include <stack>

using namespace std;

int main() {
	short T, i;
	stack <char> ops;
	string expr;
	
	ios_base::sync_with_stdio(false);
	
	cin >> T;
	while (T--) {
		cin >> expr;
		for (auto c: expr) {
			switch (c) {
				case '(':
					ops.push(c);
					break;
					
				case '^':
				case '/':
				case '*':
				case '+':
				case '-':
					ops.push(c);
					break;
					
				case ')':
					cout << ops.top();
					ops.pop();
					ops.pop();
					break;
					
				default:
					cout << c;
			}
		}
		cout << "\n";
	}
	
	return 0;
}
