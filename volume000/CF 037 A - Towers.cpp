#include <iostream>
#include <algorithm>
using namespace std;

// �}�C�̤j���� 
#define AMAX (int)1e3 + 5

int main()
{
	int N, Tower[AMAX], height = 1, count = 1, h = 1;
	
	// ��J 
	cin >> N;
	for(int i = 0 ; i < N; ++i)
	{
		cin >> Tower[i];
	}
	
	// �Ƨ� 
	sort(Tower, Tower + N);
	
	for(int i = 1; i < N; ++i)
	{
		// ��e���@�˴N�W�[���� 
		if(Tower[i] == Tower[i - 1])
		{
			++h;
			// �����̤j�� 
			if(h > height)
			{
				height = h;
			}
		}
		// ��e�����@�˴N�W�[�ƶq 
		else
		{
			h = 1;
			++count;
		}
	}

	// ��X 
	cout << height << " " << count << endl;

    return 0;
}

