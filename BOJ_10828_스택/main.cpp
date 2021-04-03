#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int i;
	cin >> i;

	stack<int> st;
	while (i--)
	{
		string a;
		cin >> a;
		if (a == "pop") {
			if (st.empty()) {
				cout << "-1" << endl;
			}
			else if (!st.empty()) {
				cout << st.top() << endl;
				st.pop();
			}
		}
		else if (a == "top") {
			if (st.empty()) {
				cout << "-1" << endl;
			}
			else if (st.empty()) {
				cout << st.top << endl;
			}
		}
		else if (a == "push") {
			int k;
			cin >> k;
			st.push(k);
		}
		else if (a == "size")
			cout << st.size() << endl;
		else if (a == "empty") {
			if (st.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
	}
}