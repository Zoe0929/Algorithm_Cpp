#include <iostream>
using namespace std;

int* Knumber(int array[], int commands[][3]);
void sort(int arr[]);
void swap(int array[], int index1, int index2);

int main()
{
    int arr[] = { 1, 5, 2, 6, 3, 7, 4 };
    int com[][3] = { {2, 5, 3},{4, 4, 1 }, {1, 7, 3} };
    int* ret = Knumber(arr, com);
    for (int t=0 ; t < sizeof(ret) / sizeof(int);t++) {
        cout << ret[t] << endl;
    }

    return 0;

}

int* Knumber(int array[], int commands[][3]) {
        int result[50];
        int row = sizeof(commands) / sizeof(commands[0]); 
        // 3: 2���� �迭�� ���� ũ�⸦ ���� ���� 
        // �迭�� �����ϴ� ��ü ������ ���� �� ���� ũ��� ������

        for (int g = 0; g < row; g++) {
            int temp[100];
            int i(commands[g][0]);
            int j(commands[g][1]);
            int k(commands[g][2]);
            for (int n = 0; n < j - i + 1; i++) {
                temp[i] = array[i + n - 1];
            }
            sort(temp);
            temp[k - 1] = result[g];
        }  
        return result;
    }
void sort(int arr[]) {
        int len = sizeof(arr) / sizeof(int);
        for (int i = 0; i < len - 1; i++) {
            for (int j = 1; j < len - i; j++) {
                if (arr[j - 1] > arr[j]) {
                    swap(arr, j - 1, j);
                }
            }
        }
    }
void swap(int array[], int index1, int index2) {
        int tempValue = array[index1]; array[index1] = array[index2];
        array[index2] = tempValue;
    }





    /* * �˰��� * 
    1. i = 0; * 
    2. i�� n-1�̸� ������. * 
    3. j = 1; * 
    4. j�� n-i�� �Ǹ� 7�� ����. * 
    5. a[j-1] > a[j] �̸� �� ���� ��ȯ�Ѵ�, * 
    6. j�� �ϳ� ������Ű�� 4�� ���ư���. * 
    7. i�� �ϳ� ������Ű�� 2�� ���ư���. */ 





/*���� ��� for��
for (int n : arr)
 n�� �� ��ȭ�� ������� ����.
*/