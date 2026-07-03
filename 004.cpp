#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	cin >> N;
	cin >> M;
	
	int arr[100][100];
	
	for(int i=0; i<N; i++)
	{
		for(int j= 0; j< N; j++)
		{
			cin>>arr[i][j];
		}
	}
	

	for(int l=0; l<M; l++)
	{
	int S = 0;
	int i, j, m, n;
	cin >> i;
	cin >> j;
	cin >> m;
	cin >> n;
	for(int a=i-1; a<m; a++)
	{
		for(int b=j-1; b<n; b++)
			S += arr[a][b];
	}
	cout << S;
	}

}
