#include<iostream>
#include<stack>

using namespace std;


int main() {
	int n,mem=1,k=0;
	int arr[10000];
	stack<int> st;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	while(1) {
		st.push(mem);
		if (mem == n + 1 && st.empty()) {
			break;
		}
		else if ( st.top() != arr[k]) {
			k++;
			cout << '+' << endl;
		}
		else {
			st.pop();
			cout << '-' << endl;
		}
		mem++;
		
	}
}