#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	// �ਫ5�N��5�A���ѤU���N�A�h���@�B 
	cout << N / 5 + (N % 5 == 0 ? 0 : 1) << endl;

    return 0;
}

