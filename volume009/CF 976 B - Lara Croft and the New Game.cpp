#include <iostream>
using namespace std;

int main()
{
	int N, M, R = 0, C = 0;
	long long K;
	// ��J 
	cin >> N >> M >> K;
	
	// ���p�b�̥��䨺�� 
	if(K < N)
	{
		R = K + 1;
		C = 1;
	}
	// ��L 
	else
	{
		// ����N�B�A��_�I����(N, 2) 
		K -= N;
		
		// p�O���F�X�ӧ��㪺�C�Ar�O�٦h���F�X�B 
		long long p = K / (M - 1), r = K % (M - 1);
		// ���ƭӧ��㪺�C�A���b���k�� 
		if(p % 2 == 0)
		{
			R = N - p;
			C = 2 + r;
		}
		// �_�ƭӧ��㪺�C�A���b������
		else
		{
			R = N - p;
			C = M - r;
		}
	}

	// ��X 
	cout << R << " " << C << endl;

    return 0;
}

