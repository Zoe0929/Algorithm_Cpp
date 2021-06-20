
#include<iostream>
#include<string>
#include<stack>


using namespace std;



int main() {
	//���� ����

	int N = 0, idx=0; //�迭 A�� ũ��
	int A[100001]; //�迭 A
	stack<int> stk;

	//n �Է� �ޱ�
	cin >> N;

	int NEG[100001]; //��ū���� ������ �迭

	if (N == 1) {
		NEG[0] = -1;
		cout << NEG[0] << endl;
		return 0;
	}

	//�迭 A�� ����� �� �Է¹ޱ�
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	//�迭 A�� �� ���ƾߵǴϱ� 
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

