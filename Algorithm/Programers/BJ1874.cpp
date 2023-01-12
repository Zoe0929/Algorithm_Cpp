#include<iostream>
#include<stack>
#include<string>

using namespace std;


int main() {
	int n,mem=1,s_in=0,re_in=0;
	int arr[10000];
	string s;

	stack<int> st;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	while (1) {
		if (st.empty() || st.top() < arr[s_in]) {
			st.push(mem++);
			s += '+\n';
		}
		else if (st.top() == arr[s_in]) {
			st.pop();
			s += '-\n';
			mem++;
		}
		else {
			cout << "NO!" << endl;
			return 0;
		}
		if (st.empty() && s_in == n + 1) break;
	}

	cout << s << endl;
	return 0;
}

//문자배열이 아닌 문자열에 + 하는 걸로 써봅시다~~~


