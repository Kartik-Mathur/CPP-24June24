#include <iostream>
#include <unordered_map>
#include <queue>
#include <map>
#include <list>
using namespace std;

template<typename T>
class Graph {
public:
	map<T, list<T> > adj;

	void addEdge(T u, T v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir) adj[v].push_back(u);
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << " : ";
			for (auto neighbour : p.second) {
				cout << neighbour << ", ";
			}
			cout << endl;
		}
	}

	int SSSP(T src, T des) { // SSSP: Single Source Shortest Path
		queue<T> q;
		unordered_map<T, bool> visited;
		unordered_map<T, T> parent;
		unordered_map<T, int> distance;

		q.push(src);
		visited[src] = true;
		parent[src] = src;
		distance[src] = 0;

		while (!q.empty()) {
			auto t = q.front();
			q.pop();

			for (auto child : adj[t]) {
				if (!visited[child]) {
					q.push(child);
					parent[child] = t;
					distance[child] = distance[t] + 1;
					visited[child] = true;
				}
			}
		}

		// Printing the shortest path
		// des se shuru karo aur parent par jaate raho
		T des_copy = des;

		while (des != src) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << des << endl;

		return distance[des_copy];

	}
};

int main() {
	Graph<int> g;

	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;


	for (int u = 0; u <= 36; ++u)
	{
		for (int dice = 1; dice <= 6; ++dice)
		{
			int v = u + dice + board[u + dice];
			g.addEdge(u, v, false);
		}
	}

	int ans = g.SSSP(0, 36);
	cout << "Distance : " << ans << endl;




	return 0;
}
















