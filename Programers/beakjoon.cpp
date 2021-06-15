#include<iostream>
#include<string>
using namespace std;
const int MAX_STACK_SIZE = 20;



class Stack {
public:
	int t;
	int data[];
	Stack() {
		t = -1;
	}
	void push(int x) {
		data[++t] = x;
	}
	void pop() {
		if (t > -1) {
			cout << data[t] << endl;
			t--;
		}
		else {
			cout << -1 << endl;
		}
	}
	void size() {
		cout << t + 1 << endl;
	}
	void empty() {
		if (t == -1)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	void top() {
		if (t > -1) {
			cout << data[t] << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
};
//10828
int main() {
	int num = 0;
	string str;
	cin >> num;	
	Stack stack;
	int x;
	for (int i = 0; i < num; i++) {
		cin >> str;
		if (str == "push") {
			cin >> x;
			stack.push(x);
		}
		else if (str == "pop")
			stack.pop();
		else if (str == "size")
			stack.size();
		else if (str == "empty")
			stack.empty();
		else if (str == "top")
			stack.top();
	}
	return 0;
}

