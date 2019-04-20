#include <iostream>
#include <algorithm>
using namespace std;

// �s�����c 
struct Dragon
{
	// ���˻ݭn���O�q 
	int X;
	// ���˫�[�h�֤O�q 
	int Y;
};

// �N�s�̾ڥ��˻ݭn���O�q(X)�Ѥp�ƨ�j������禡 
bool comp(Dragon a, Dragon b)
{
	return a.X < b.X; 
} 

int main()
{
	int S, N;
	Dragon D[1000];
	
	// ��J 
	cin >> S >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> D[i].X >> D[i].Y;
	}

    // �̾ڥ��˻ݭn���O�q(X)�Ѥp�ƨ�j�Ƨ� 
	sort(D, D + N, comp);
	
	bool win = true;
	for(int i = 0; i < N; ++i)
	{
		// ������ 
		if(S <= D[i].X)
		{
			// ��F 
			win = false;
			break;
		}
		
		// ���ˤF�A�W�[�O�q 
		S += D[i].Y;
	} 

    // ��X 
	cout << (win ? "YES" : "NO") << endl;

    return 0;
}

