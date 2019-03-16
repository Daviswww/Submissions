#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int Ball[50];
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> Ball[i];
	}
	
	// �q�p�ƨ�j 
	sort(Ball, Ball + N);
	
	bool OK = false;
	// �Ĥ@���y 
	for(int i = 0; i < N - 2 && !OK; ++i)
	{
		// �ĤG���y 
		for(int j = i + 1; j < N - 1 && !OK; ++j)
		{
			// �@��G���@�˪��� 
			if(Ball[i] != Ball[j])
			{
				// �ĤT���y 
				for(int k = j + 1; k < N && !OK; ++k)
				{
					// �G��T���@�˪��� 
					if(Ball[j] != Ball[k])
					{
						// �Ĥ@��+1=�ĤG���A�ĤG��+1=�ĤT�� 
						if(Ball[i] + 1 == Ball[j] && Ball[j] + 1 == Ball[k])
						{
							OK = true;
						}
					}
				}
			}
		}
	}
	
	cout << (OK ? "YES" : "NO") << endl;

    return 0;
}

