#include<iostream>
#include<stack>

using namespace std;


int main() {
	int n,mem=1,s_in=0,re_in=0;
	int arr[10000];
	char result[10000];

	stack<int> st;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	while (1) {
		if (st.empty() || st.top() < arr[s_in]) {
			st.push(mem++);
			result[re_in++] = '+';
		}
		else if (st.top() == arr[s_in]) {
			st.pop();
			result[re_in++] = '-';
			mem++;
		}
		else {
			cout << "NO!" << endl;
			return 0;
		}
		if (st.empty() && s_in == n + 1) break;
	}
	for (int i = 0; i < re_in; i++)
		cout << result[i] << endl;
	return 0;
}

//문자배열이 아닌 문자열에 + 하는 걸로 써봅시다~~~


