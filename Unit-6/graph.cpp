// Graph
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph{
    int V;
    list<int> *l;       // int* arr {Dynamic list of integers}

public:
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
        // arr = new int[V]
    }

    // Edge exists between two nodes
    void addEdge(int a, int b){
        // Undirected Case
        l[a].push_back(b);
        l[b].push_back(a);
    }
    
    void printAdjList(){
        for (int i = 0; i < V; i++){
            cout << i << " : ";
            for(int neigh : l[i]){
                cout << neigh << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);

    g.printAdjList();

    return 0;
}