/*
Date:2019/4/18

�D�N:
	��X�̤p�������|���̤j�������C 
	
���:
	�N�Ҧ����|�]�L�@�M�@�@����x�s�C 
note:
	��J: start = 2, end = 6
	map[2][1] �P map[1][3] ���| (50 < 60)�A�����j���s�J�A�P����q��� map[2][3](100000 > 60) map[2][3]=60 
	map[2][3] �P map[3][6] ���| (60 > 50)�A�����j���s�J�A�P����q��� map[2][6](100000 > 60) map[2][6]=60
*/

#include<cstdio>
#include<cstdlib>
#define min(x, y) x < y ? x : y
const int maxc = 105;
const int maxs = 1005; 

int main()
{
	int n, m, q, count = 0;
	
	while(scanf("%d %d %d", &n, &m, &q), n != 0)
	{
		int map[maxc][maxs];
		//��l�� 
		for(int i = 0; i < maxc; i++)
		{
			for(int j = 0; j < maxs; j++)
			{
				map[i][j] = 100000;	
			}
		}
		//�x�s���| 
		for(int i = 0; i < m; i++)
		{
			int l, r, q;
			scanf("%d %d %d", &l, &r, &q);
			map[l][r] = q;
			map[r][l] = q;
		}
		//�N�������|�]�L�@�M 
		for(int k = 1; k <= n; k++)
		{
			for(int i = 1; i <= n; i++)
			{
				for(int j = 1; j <= n; j++)
				{
					//�P�_�����|�֤���j I~K K~J ���|���̤j�� 
					if(map[i][k] > map[k][j])
					{
						//I~J�P���q��������p�� 
						map[i][j] = min(map[i][k], map[i][j]);
					}
					else
					{
						map[i][j] = min(map[k][j], map[i][j]);
					}
				}
			}
		}
		if(count)
		{
			printf("\n");	
		} 
		printf("Case #%d\n", ++count);
		for(int i = 0; i < q; i++)
		{
			int start, end;
			
			scanf("%d %d", &start, &end);
			//�Y���|�S�Q��ʪ�ܵL�����| 
			if(map[start][end] == 100000)
			{
				printf("no path\n");
			}
			else
			{
				printf("%d\n", map[start][end]);
			}
		}	
	}
	return 0;
}
