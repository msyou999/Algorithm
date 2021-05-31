#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string sentence = "";
	getline(cin, sentence);
	sentence += '\n';
	stack<char> st;
	bool b = false;
	for (int j = 0; j < sentence.size(); j++) {
		if (sentence[j] == '<') {
			while (!st.empty()) {
				cout << st.top();
				st.pop();
			}
			cout << "<";
			b = true;
		}
		else if (sentence[j] == '>') {
			cout << ">";
			b = false;
		}
		else if (b)
			cout << sentence[j];
		else if (sentence[j] == ' ' || sentence[j] == '\n') {
			while (!st.empty()) {
				cout << st.top();
				st.pop();
			}
			cout << " ";
		}
		else st.push(sentence[j]);
	}
	return 0;
}