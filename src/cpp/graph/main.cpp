#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

class Graph {
public:
  unordered_map<int, list<int>> g;

  void addEdge(int u, int v, bool isDir) {
    g[u].push_back(v);
    if (!isDir) {
      g[v].push_back(u);
    }
  }

  void printGraph() {
    for (auto i : g) {
      cout << i.first << " -> ";
      for (auto j : i.second) {
        cout << j << ", ";
      }
      cout << endl;
    }
  }
};

int main(int argc, char *argv[]) {
  int n = 6;
  Graph g;
  for (int i = 0; i < n; i++) {
    int u, v;
    cin >> u >> v;
    g.addEdge(u, v, 0);
  }

  g.printGraph();

  return 0;
}
