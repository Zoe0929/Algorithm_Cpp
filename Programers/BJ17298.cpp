
#include<iostream>
#include<string>
#include<stack>
#include<vector>


using namespace std;


int main() {
	//���� ����

	int N = 0, idx=0; //�迭 A�� ũ��
	vector<int> A; //�迭 A
	stack<int> stk;

	//n �Է� �ޱ�
	cin >> N;

	vector<int> NEG; //��ū���� ������ �迭

	int a = 0;
	//�迭 A�� ����� �� �Է¹ޱ�
	for (int i = 0; i < N; i++) {
		cin >> a;
		A.push_back(a);
	}

	if (N == 1) {
		NEG[0] = -1;
		cout << NEG[0] << endl;
		return 0;
	}
	//�迭 A�� �� ���ƾߵǴϱ� 
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

