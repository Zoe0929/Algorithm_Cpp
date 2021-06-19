
#include<iostream>
#include<string>
#include<stack>


using namespace std;
const int MAX_SIZE = 100000;


int main() {
	//변수 선언

	int N = 0, idx=0; //배열 A의 크기
	int A[MAX_SIZE]; //배열 A
	stack<int> stk;

	//n 입력 받기
	cin >> N;

	int NEG[MAX_SIZE]; //오큰수를 저장할 배열


	//배열 A에 저장될 수 입력받기
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	//배열 A을 다 돌아야되니까 
	for (int i = 0; i < N; i++) {

		if (stk.empty()) stk.push(A[i]);
		idx = i;
		while (1){
			stk.push(A[idx + 1]);
			if (stk.top() > A[i]) {
				NEG[i] = stk.top();
				while (!stk.empty())  stk.pop(); //stk.clear();
				break;
			}
			else if (idx-1==N || i+1==N) {
				NEG[i] = -1;
				break;
			}
			idx++;
		}
		}
	for (int j=0;j<N;j++)
		cout <<NEG[j] << " ";
	return 0;
}

