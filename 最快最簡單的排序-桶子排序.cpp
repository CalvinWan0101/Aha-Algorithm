#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	//數值範圍為0~100
	int bucket[101];
	//給予所有的桶子初值0
	for (int i = 0; i < 100; i++)
		bucket[i] = 0;

	int number;
	cout << "資料量：";
	cin >> number;

	//桶子排序法主體
	int t;
	for (int i = 1; i <= number; i++)
	{	
		cout << "第" << i << "個數據：";
		cin >> t;
		bucket[t]++;
	}

	//從小到大印出結果
	for (int i =0; i <101; i++)
		for (int j = i; j <= bucket[i]; j++)
			cout <<setw(2)<< i;
	cout << endl;
	//從大到小印出結果
	for (int i = 100; i >= 0; i--)
		for (int j = i; j <= bucket[i]; j++)
			cout << setw(2) << i;
	system("PAUSE");
	return 0;
}