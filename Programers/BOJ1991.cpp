#include<iostream>
#include<stack>
#include<vector>

using namespace std;


struct Node
{
	int Left, Right;
};
Node Tree[26];


void inorder(int st) {
	if (Tree[st].Left != -1)inorder(Tree[st].Left);
	cout << char('A' + st) << ' ';
	if (Tree[st].Right != -1)inorder(Tree[st].Right);
}


void preorder(int st) {
	cout << char('A' + st) << ' ';
	if (Tree[st].Left != -1) preorder(Tree[st].Left);
	if (Tree[st].Right != -1) preorder(Tree[st].Right);
}


void postorder(int st) {
	if (Tree[st].Left != -1) postorder(Tree[st].Left);
	if (Tree[st].Right != -1) postorder(Tree[st].Right);
	cout << char('A' + st) << ' ';
}

int main() {
	int N = 0;
	cin >> N;

	for (int i =0 ; i < 26; i++) {
		Tree[i].Left = Tree[i].Right = -1;
	}

	for (int i = 0; i < N; i++) {
		char p, l, r;
		cin >> p >> l >> r;
		if (l != '.') {
			Tree[p - 'A'].Left = l - 'A';
		}
		if (r != '.') 
		{
			Tree[p - 'A'].Right = r - 'A';
		}
	}

	preorder(0);
	cout << '\n';
	inorder(0);
	cout << '\n';
	postorder(0);
	cout << '\n';

}
