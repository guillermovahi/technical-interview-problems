#include <stdlib.h>
#include <stdbool.h>

void dfs(int **isConnected, bool *visited, int row, int col, int i)
{
	if(visited[i]) return;
	
	visited[i] = true;
	for(int j = 0; j < col; j++)
	{
		if(visited[j] == false && isConnected[i][j] == 1)
			dfs(isConnected, visited, row, col, j);
	}

}

int findCircleNum(int** isConnected, int isConnectedSize, int* isConnectedColSize)
{
	int count = 0;
	bool *visited = (bool *) calloc(isConnectedSize, sizeof(int));
	
	for(int i = 0; i < isConnectedSize; i++)
	{
		if(visited[i] == false)
		{
			dfs(isConnected, visited, isConnectedSize, *isConnectedColSize, i);
			count++;
		}
	}
	free(visited);
	return count;
}
