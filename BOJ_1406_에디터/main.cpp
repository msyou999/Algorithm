#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	string d;
	deque<char> dq1; //¿ÞÂÊ 
	deque<char> dq2; //¿À¸¥ÂÊ
	cin >> d;
	for (char v : d)
		dq1.push_back(v);

	int i;
	cin >> i;
	for (int j = 0; j < i; j++) {
		string s;
		cin >> s;
		if (s == "P") {
			char b;
			cin >> b;
			dq1.push_back(b);
		}
		else if (s == "L" && dq1.empty() == false) {
			char k;
			k = dq1.back();
			dq1.pop_back();
			dq2.push_front(k);

		}
		else if (s == "D" && dq2.empty() == false) {
			char t;
			t = dq2.front();
			dq2.pop_front();
			dq1.push_back(t);
		}
		else if (s == "B" && dq1.empty() == false) {
			dq1.pop_back();
		}
	}


	while (!dq2.empty()) {
		char y;
		y = dq2.front();
		dq2.pop_front();
		dq1.push_back(y);
	}


	while (!dq1.empty()) {
		char x;
		x = dq1.front();
		cout << x;
		dq1.pop_front();
	}
}