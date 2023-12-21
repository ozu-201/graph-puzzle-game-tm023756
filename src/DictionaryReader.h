//
// Created by tm023756 on 12/21/2023.
//

#ifndef GRAPH_PUZZLE_GAME_TM023756_DICTIONARYREADER_H
#define GRAPH_PUZZLE_GAME_TM023756_DICTIONARYREADER_H
#include <string>
#include <vector>

class DictionaryReader {
public:
    explicit DictionaryReader(const std::string &filePath);
    std::vector<std::string> readWordsFilteredByLength(int length);

private:
    std::string filePath;
    std::vector<std::string> readAllWords();
};
#endif //GRAPH_PUZZLE_GAME_TM023756_DICTIONARYREADER_H
