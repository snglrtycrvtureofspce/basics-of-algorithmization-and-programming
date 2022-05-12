#include <iostream>

using namespace std;

const int  MAX_E = (int)1e6; // 1 * 10^6 = 1000000
const int MAX_V = (int)1e3; // 1 * 10^3 = 1000
const int INF = (int)1e9; // 1 * 10^9 = 1000000000
int numOfVertex, numOfEdge, sourceVertex, destinationVertex, edgeCount;
int capacity[MAX_E], onEnd[MAX_E], nextEdge[MAX_E], firstEdge[MAX_V], visited[MAX_V];

void addEdge(int u, int v, int cap)
{
	// straight edge
	onEnd[edgeCount] = v; // at the end of a straight v
	nextEdge[edgeCount] = firstEdge[u]; // add to the beginning of the list for u
	firstEdge[u] = edgeCount; // now the beginning of the list is a new edge
	capacity[edgeCount++] = cap; // set bandwidth
	// reverse edge
	onEnd[edgeCount] = u; // at the end of a reverse u
	nextEdge[edgeCount] = firstEdge[v]; // add to the beginning of the list for v
	firstEdge[v] = edgeCount; // now the beginning of the list is a new edge
	capacity[edgeCount++] = 0; // set bandwidth
}
int findFlow(int u, int flow)
{
	if (u == destinationVertex)
	{
		return flow; // return the resulting minimum on the path
	}
	visited[u] = true;
	for (int edge = firstEdge[u]; edge != -1; edge = nextEdge[edge])
	{
		int to = onEnd[edge];
		if (!visited[to] && capacity[edge] > 0)
		{
			int minResult = findFlow(to, min(flow, capacity[edge])); // looking for a thread in a subtree
			if (minResult > 0) // if the flow is found
			{
				capacity[edge] -= minResult; // for straight edges, subtract the flow and save the new value
				capacity[edge ^ 1] += minResult; // add the flow to the back edges and save the new value
				return minResult;
			}
		}
	}
	return 0; // if we did not find a stream from this vertex, then we return 0
}



int main()
{
	fill(firstEdge, firstEdge + MAX_V, -1); // -1 means no edge
	cout << "Number of peaks: ";
	cin >> numOfVertex; // count the number of vertices from the user
	cout << "Number of ribs: ";
	cin >> numOfEdge; // count the number of edges from the user
	cout << "Enter the number of the source vertex: ";
	cin >> sourceVertex; // counting the source vertex
	cout << "Enter the sink node number: ";
	cin >> destinationVertex; // read top-sink
	for (int i = 0, u, v, cap; i < numOfEdge; i++)
	{
		cout << "Enter the starting vertex of the arc: ";
		cin >> u;
		cout << "Enter the end vertex of the arc:";
		cin >> v;
		cout << "Enter the bandwidth of the arc:";
		cin >> cap;
		addEdge(u, v, cap); // save the arc with user data
	}
	// Next, finding the maximum flow
	int maxFlow = 0;
	int iterationResult = 0;
	while ((iterationResult = findFlow(sourceVertex, INF)) > 0)
	{
		fill(visited, visited + MAX_V, false);
		maxFlow += iterationResult;
	}
	cout << "Maximum flow: " << maxFlow << endl;
	return 0;
}