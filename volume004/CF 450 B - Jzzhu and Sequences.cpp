#include <iostream>
using namespace std;

int main()
{
	int X, Y, N;
	
	// ��J 
	cin >> X >> Y >> N;
	
	// �ǳƦn�`�������e 
	int p[6] = {X, Y, Y - X, -X, -Y, X - Y};
	// �p���N�����b�`�������ĴX�� 
	int ans = p[(N - 1) % 6] % (int)(1e9 + 7);
	
	// ��X�A�O�t�ƪ��ܭn�[�^���� 
	cout << (ans < 0 ? ans + (int)(1e9 + 7) : ans) << endl;

    return 0;
}

