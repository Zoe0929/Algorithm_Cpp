
#include<iostream>
#include<string>
#include<stack>
#include<vector>


using namespace std;


int main() {
	//변수 선언

	int N = 0, idx=0; //배열 A의 크기
	vector<int> A; //배열 A
	stack<int> stk;

	//n 입력 받기
	cin >> N;

	vector<int> NEG; //오큰수를 저장할 배열

	int a = 0;
	//배열 A에 저장될 수 입력받기
	for (int i = 0; i < N; i++) {
		cin >> a;
		A.push_back(a);
	}

	if (N == 1) {
		NEG[0] = -1;
		cout << NEG[0] << endl;
		return 0;
	}
	//배열 A을 다 돌아야되니까 
	for (int i = 0; i < N; i++) {

		if (stk.empty()) stk.push(A[i]);
		if (i + 1 == N) NEG.push_back(-1);
		idx = i;
		while (i+1<N){
			stk.push(A[idx + 1]);
			if (stk.top() > A[i]) {
				NEG.push_back(stk.top());
				while (!stk.empty())  stk.pop(); //stk.clear();
				break;
			}
			else if (idx-1==N ) {
				NEG.push_back(-1);
				break;
			}
			idx++;
		}
		}
	for (int j=0;j<N;j++)
		cout <<NEG[j] << " ";
	return 0;
}

