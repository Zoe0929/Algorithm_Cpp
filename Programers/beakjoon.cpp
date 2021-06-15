//STL »ç¿ë
#include<iostream>
#include<string>
#include<stack>

using namespace std;
const int MAX_st_SIZE = 1000;



//10828
int main() {
	int num = 0;
	string str;
	cin >> num;
	stack<int> st;
	int x;
	for (int i = 0; i < num; i++) {
		cin >> str;
		if (str == "push") {
			cin >> x;
			st.push(x);
		}
		else if (str == "pop") {
			if (!st.empty()) {
				cout << st.top() << endl;
				st.pop();
			}
			else
				cout << -1 << endl;
		}
		else if (str == "size")
			cout << st.size() << endl;
		else if (str == "empty") {
			if (st.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (str == "top")
			if (st.empty())
				cout << -1 << endl;
			else
				cout << st.top() << endl;
	}
	return 0;
}

