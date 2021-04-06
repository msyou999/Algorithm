#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	int k;
	cin >> k;
	deque<int> dq;
	for (int i = 0; i < k; i++) {
		string a;
		cin >> a;
		if (a == "push_front") {
			int j;
			cin >> j;
			dq.push_front(j);
		}
		else if (a == "push_back") {
			int t;
			cin >> t;
			dq.push_back(t);
		}
		else if (a == "pop_front") {
			if (dq.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}
		else if (a == "pop_back") {
			if (dq.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << dq.back() << endl;
				dq.pop_back();
			}
		}
		else if (a == "size") {
			cout << dq.size() << endl;
		}
		else if (a == "empty") {
			cout << dq.empty() << endl;
		}
		else if (a == "front") {
			if (dq.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << dq.front() << endl;

			}
		}
		else if (a == "back") {
			if (dq.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << dq.back() << endl;
			}
		}
	}
}