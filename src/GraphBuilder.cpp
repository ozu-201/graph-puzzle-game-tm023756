//
// Created by tm023756 on 12/21/2023.
//

#include "GraphBuilder.h"

array::Graph GraphBuilder::buildGraphForWords(const std::vector<std::string>& words) {
    array::Graph wordGraph(words.size());
    for (int i = 0; i < words.size(); i++) {
        for (int j = i + 1; j < words.size(); j++) {
            if (isOneLetterDifferent(words[i], words[j])) {
                wordGraph.addEdge(i, j);
                wordGraph.addEdge(j, i);
            }
        }
    }
    return wordGraph;
}

bool GraphBuilder::isOneLetterDifferent(const std::string& word1, const std::string& word2) {
    if (word1.length() != word2.length()) {
        return false;
    }
    int diffCount = 0;
    for (int i = 0; i < word1.length(); i++) {
        if (word1[i] != word2[i]) {
            diffCount++;
            if (diffCount > 1) {
                return false;
            }
        }
    }
    return diffCount == 1;
}