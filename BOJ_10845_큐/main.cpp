#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	int k;
	cin >> k;
	queue<int> que;
	for (int i = 0; i < k; i++) {
		string a;
		cin >> a;
		if (a == "pop") {
			if (que.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << que.front() << endl;
				que.pop();
			}
		}
		else if (a == "push") {
			int j;
			cin >> j;
			que.push(j);
		}
		else if (a == "size") {
			cout << que.size() << endl;
		}
		else if (a == "empty") {
			cout << que.empty() << endl;
		}
		else if (a == "front") {
			if (que.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << que.front() << endl;

			}
		}
		else if (a == "back") {
			if (que.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << que.back() << endl;
			}
		}
	}
}