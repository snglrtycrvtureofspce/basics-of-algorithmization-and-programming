#include <iostream>
#define INF 9999999

using namespace std;


const int V = 5; // Number of vertices in a graph
int G[V][V] = { // Two-dimensional array of size 5x5 for the adjacency matrix to represent the weighted graph
	{0, 9, 75, 0, 0},
	{9, 0, 95, 19, 42},
	{75, 95, 0, 51, 66},
	{0, 19, 51, 0, 31},
	{0, 42, 66, 31, 0}
};

int main()
{
	int no_edge; // Number of ribs
	int selected[V]; // array to keep track of selected vertices (selected vertex will be true, unselected will be false)
	memset(selected, false, sizeof(selected)); // set all vertices to false initially
	no_edge = 0;
	selected[0] = true;
	int x, y;
	cout << "Edge:\this weight\n";
	while (no_edge < V - 1) // go through all the edges (there are 1 less of them than all the vertices of the connected graph)
	{ // for each vertex in the set With find all neighboring vertices, calculate the distance (weight) from the vertex selected in step 1
		int min = INF;
		x = 0; // closest to the vertex selected in step 1
		y = 0;
		for (int i = 0; i < V; i++)
		{
			if (selected[i])
			{
				for (int j = 0; j < V; j++)
				{
					if (!selected[j] && G[i][j]) // is this a vertex and it's not selected yet?
					{
						if (min > G[i][j]) // if the weight of this edge is less than the minimum
						{
							min = G[i][j]; // then we make this weight minimal
							x = i; // We save the vertex number A
							y = j; // We save the vertex number B
						}
					}
				}
			}
		}
		cout << x << " - " << y << ":\t" << G[x][y] << endl;
		selected[y] = true;
		no_edge++;
		return 0;
	}


}