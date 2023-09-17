#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Function to perform BFS traversal
void BFS(vector<vector<int>>& graph, int startVertex) {
    int numVertices = graph.size();

    // Create a visited array to track visited vertices
    vector<bool> visited(numVertices, false);

    // Create a queue for BFS traversal
    queue<int> bfsQueue;

    // Enqueue the starting vertex and mark it as visited
    bfsQueue.push(startVertex);
    visited[startVertex] = true;

    // Perform BFS traversal
    while (!bfsQueue.empty()) {
        // Dequeue a vertex from the queue
        int currentVertex = bfsQueue.front();
        bfsQueue.pop();

        // Process the current vertex (print or perform other operations)
        cout << currentVertex << "";

        // Enqueue the unvisited neighbors of the current vertex
        for (int neighbor : graph[currentVertex]) {
            if (!visited[neighbor]) {
                bfsQueue.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

int main() {
    // Example graph represented as an adjacency list
    vector<vector<int>> graph = {
        {5},       // Vertex 0 is connected to vertices 1 and 2
        {0, 2, 3},    // Vertex 1 is connected to vertices 0, 2, and 3
        {2, 3, 5},    // Vertex 2 is connected to vertices 0, 1, and 3
        {1, 2, 4},    // Vertex 3 is connected to vertices 1, 2, and 4
        {3}           // Vertex 4 is connected to vertex 3
    };

    int startVertex = 0; // Starting vertex for BFS traversal

    cout << "BFS Traversal: ";
    BFS(graph, startVertex);

    return 0;
}
