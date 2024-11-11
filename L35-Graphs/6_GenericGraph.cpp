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

	void bfs(T src) {
		queue<T> q;
		unordered_map<T, bool> visited;

		q.push(src);
		visited[src] = true;

		while (!q.empty()) {
			auto t = q.front();
			q.pop();
			cout << t << " ";

			for (auto child : adj[t]) {
				if (!visited[child]) {
					q.push(child);
					visited[child] = true;
				}
			}
		}
		cout << endl;
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
	g.addEdge(0, 1);
	g.addEdge(2, 1);
	g.addEdge(2, 4);
	g.addEdge(2, 3);
	g.addEdge(4, 3);
	g.addEdge(5, 3);
	g.addEdge(0, 4);

	// g.print();
	g.bfs(0);
	int ans = g.SSSP(0, 5);
	cout << "Distance : " << ans << endl;

	/*
	Graph<string> g;
	g.addEdge("A", "B");
	g.addEdge("D", "B");
	g.addEdge("D", "C");
	g.addEdge("D", "E");
	g.addEdge("A", "C");
	g.addEdge("A", "D");
	*/


	return 0;
}
















