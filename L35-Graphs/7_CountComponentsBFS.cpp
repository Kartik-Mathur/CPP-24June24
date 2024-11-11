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

	void bfs(T src, unordered_map<T, bool> &visited) {
		queue<T> q;

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

	void countComponents(T src) {
		int component = 1;
		unordered_map<T, bool> visited;
		bfs(src, visited);

		for (auto p : adj) {
			if (!visited[p.first]) {
				bfs(p.first, visited);
				component++;
			}
		}

		cout << "\nTotal components: " << component << endl;

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
	g.addEdge(6, 7);
	g.addEdge(8, 7);

	// g.print();
	g.countComponents(0);




	return 0;
}
















