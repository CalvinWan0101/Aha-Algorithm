#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	//�ƭȽd��0~100
	int bucket[101];
	//�����Ҧ�����l���0
	for (int i = 0; i < 100; i++)
		bucket[i] = 0;

	int number;
	cout << "��ƶq�G";
	cin >> number;

	//��l�ƧǪk�D��
	int t;
	for (int i = 1; i <= number; i++)
	{	
		cout << "��" << i << "�ӼƾڡG";
		cin >> t;
		bucket[t]++;
	}

	//�q�p��j�L�X���G
	for (int i =0; i <101; i++)
		for (int j = i; j <= bucket[i]; j++)
			cout <<setw(2)<< i;
	cout << endl;
	//�q�j��p�L�X���G
	for (int i = 100; i >= 0; i--)
		for (int j = i; j <= bucket[i]; j++)
			cout << setw(2) << i;
	system("PAUSE");
	return 0;
}