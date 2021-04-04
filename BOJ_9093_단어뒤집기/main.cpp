#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		string sentence = "";
		getline(cin, sentence);
		stack<char> stack;
		for (int j = 0; j < sentence.size(); j++) {
			if (sentence[j] == ' ' || sentence[j] == '\n') {
				while (!stack.empty()) {
					cout << stack.top();
					stack.pop();
				}
				cout << " ";
			}
			else stack.push(sentence[j]);
		}
		cout << endl;
	}
	return 0;
}