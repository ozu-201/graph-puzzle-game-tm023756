//
// Created by tm023756 on 12/21/2023.
//

#ifndef GRAPH_PUZZLE_GAME_TM023756_BFS_H
#define GRAPH_PUZZLE_GAME_TM023756_BFS_H


class BFS {

};
#include <string>
#include <vector>
#include <unordered_map>
#include "GraphBuilder.h"

class WordBFS {
public:
    WordBFS(const WordGraph& graph);
    std::vector<std::string> findPath(const std::string& start, const std::string& end);

private:
    WordGraph graph;
    std::vector<std::string> reconstructPath(const std::string& start, const std::string& end,
                                             std::unordered_map<std::string, std::string>& parent);
};

#endif //GRAPH_PUZZLE_GAME_TM023756_BFS_H
