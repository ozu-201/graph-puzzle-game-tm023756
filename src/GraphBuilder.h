//
// Created by tm023756 on 12/21/2023.
//

#ifndef GRAPH_PUZZLE_GAME_TM023756_GRAPHBUILDER_H
#define GRAPH_PUZZLE_GAME_TM023756_GRAPHBUILDER_H

#include "Array/Graph/Graph.h"
#include <string>
#include <vector>
#include <unordered_map>

class GraphBuilder {
public:
    static array::Graph buildGraphForWords(const std::vector<std::string>& words);

private:
    static bool isOneLetterDifferent(const std::string& word1, const std::string& word2);
};

#endif //GRAPH_PUZZLE_GAME_TM023756_GRAPHBUILDER_H


