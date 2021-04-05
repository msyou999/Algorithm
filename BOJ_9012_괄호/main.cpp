#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool vps(string p) {
	stack<char> st;
	stack<char> st2;
	bool sw = true;
	for (int i = 0; i < p.size(); ++i) {
		if (p[i] == '(')
			st.push(p[i]);
		else if (!st.empty() && p[i] == ')')
			st.pop();
		else if (st.empty() && p[i] == ')') {
			sw = false;
			break;
		}
		else if (p[i] == '[')
			st2.push(p[i]);
		else if (!st2.empty() && p[i] == ']')
			st2.pop();
		else if (st2.empty() && p[i] == ']') {
			sw = false;
			break;
		}
	}
	if (st.empty() && st2.empty() && sw)
		return true;
	else return false;
}

int main() {
	int num;
	string p;
	stack<char> st;
	stack<char> st2;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> p;
		if (vps(p))
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}