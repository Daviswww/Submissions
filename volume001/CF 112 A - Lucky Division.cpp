#include <iostream>
using namespace std;

int main()
{
	// ����1000�H�U�����B�Ʀr���g�X�� 
	int lucky[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	
	int N;
	cin >> N;
	
	// ans�s�O���O�X�G���B�Ʀr 
	bool ans = false;
	for(int i = 0; i < 14; ++i)
	{
		// �i�H�Q�䤤�@�ө��B�Ʀr�㰣�A�O�X�G���B�Ʀr 
		if(N % lucky[i] == 0)
		{
			ans = true;
			break;
		}
	}
	
	// �T���B��l ?: �A�����P�_���Atrue���ܰ��椤���A���M����k��
	// �򥻤W����O²����if else 
	cout << (ans ? "YES" : "NO") << endl;

    return 0;
}

