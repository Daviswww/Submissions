#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N, res = 0;
	string str;
	
	// ��J�h����ƶq 
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> str;
		// �ھڤ��P���h����[���P������ 
		if(str == "Tetrahedron")
		{
			res += 4;
		}
		else if(str == "Cube")
		{
			res += 6;
		}
		else if(str == "Octahedron")
		{
			res += 8;
		}
		else if(str == "Dodecahedron")
		{
			res += 12;
		}
		else if(str == "Icosahedron")
		{
			res += 20;
		}
	}
	
	// ��X 
	cout << res << endl;

    return 0;
}

