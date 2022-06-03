#include <stdio.h>
#include <stdlib.h>
// The negative cycle portion, not done and not needed.
// the algorithm is slightly different from sir's Algo.
#define INF 10e7

void print(int *a, int v, int iter)
{ // this is for debugging
	int i;
	printf("\nFor Relaxation number: %d\n", iter);
	for (i = 0; i < v; i++)
		if (a[i] != INF)
			printf("%d\t", a[i]);
		else
			printf("INF\t");
}

void printFinalDist(int *dp, int v, int iter)
{
	int i;
	printf("\n\n\nThe distance to all vertices from Source is:\n");
	for (i = 0; i < v; i++)
		printf("(%d)\t", i);
	puts("");
	for (i = 0; i < v; i++)
	{
		if (dp[(v - 1) * v + i] != INF)
			printf("%d\t", dp[(iter - 1) * v + i]);
		else
			printf("INF\t");
	}
}

void BellmanFord(int *edgeList, int e, int v, int src)
{
	int *dp = (int *)calloc(v * (v - 1), sizeof(int));
	int *cos, i, j, fl, u, v1, wt;
	for (j = 0; j < v; j++)
		dp[j] = INF;
	dp[src] = 0;
	for (i = 1; i < v; i++)
	{
		cos = (int *)calloc(v, sizeof(int));
		for (j = 0; j < v; j++)
			cos[j] = dp[v * (i - 1) + j];
		print(cos, v, i);
		fl = 0;
		for (j = 0; j < e; j++)
		{
			u = edgeList[3 * j];
			v1 = edgeList[3 * j + 1];
			wt = edgeList[3 * j + 2];
			if ((cos[u] != INF) && (cos[u] + wt < cos[v1]))
			{
				cos[v1] = cos[u] + wt;
				// printf("\ncos=%d\n",cos[v1]);
				// puts("here");
				fl = 1;
			}
		}
		for (j = 0; j < v; j++)
			dp[v * i + j] = cos[j];
		if (!fl)
		{
			i++;
			break;
		}
		free(cos);
	}
	printFinalDist(dp, v, i);
}

int main()
{
	int v, e, *edgeList, i, j, *dp, src;
	printf("Enter the number of vertices and edges:");
	scanf("%d%d", &v, &e);
	edgeList = (int *)calloc(e * 3, sizeof(int));
	printf("Enter the Edges and distance:\n");
	for (i = 0; i < e; i++)
	{
		scanf("%d%d%d", &edgeList[3 * i], &edgeList[3 * i + 1], &edgeList[3 * i + 2]);
		// printf("\n%d\n",i);
	}
	// puts("hiugiug");
	printf("Enter the Source Vertex: ");
	scanf("%d", &src);
	BellmanFord(edgeList, e, v, src);
}
/*
7 10
0 1  6
0 2  5
0 3  5
1 4  -1
2 1  -2
2 4  1
3 2  -2
3 5  -1
4 6  3
5 6  3
0


2 1
0 1 4
0


6 6
0 1 6
1 2 3
2 3 4
2 5 5
3 1 9
3 4 3
0

*/