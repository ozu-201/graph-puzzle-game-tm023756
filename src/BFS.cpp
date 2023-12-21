//
// Created by tm023756 on 12/21/2023.
//

#include "BFS.h"
#include <queue>
#include <unordered_set>

WordBFS::WordBFS(const WordGraph& graph) : graph(graph) {}

std::vector<std::string> WordBFS::findPath(const std::string& start, const std::string& end) {
    std::queue<std::string> queue;
    std::unordered_set<std::string> visited;
    std::unordered_map<std::string, std::string> parent;

    queue.push(start);
    visited.insert(start);

    while (!queue.empty()) {
        std::string current = queue.front();
        queue.pop();

        if (current == end) {
            return reconstructPath(start, end, parent);
        }

        for (const auto& neighbor : graph.getNeighbors(current)) {
            if (visited.find(neighbor) == visited.end()) {
                visited.insert(neighbor);
                parent[neighbor] = current;
                queue.push(neighbor);
            }
        }
    }

    return {}; // Return empty vector if no path found
}

std::vector<std::string> WordBFS::reconstructPath(const std::string& start, const std::string& end,
                                                  std::unordered_map<std::string, std::string>& parent) {
    std::vector<std::string> path;
    for (std::string at = end; at != start; at = parent[at]) {
        path.push_back(at);
    }
    path.push_back(start);
    std::reverse(path.begin(), path.end());
    return path;
}
