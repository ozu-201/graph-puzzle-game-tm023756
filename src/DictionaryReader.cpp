//
// Created by tm023756 on 12/21/2023.
//

#include "DictionaryReader.h"
#include <fstream>
#include <iostream>

DictionaryReader::DictionaryReader(const std::string &filePath) : filePath(filePath) {}

std::vector<std::string> DictionaryReader::readAllWords() {
    std::vector<std::string> words;
    std::ifstream file(filePath);
    std::string word;
    while (file >> word) {
        words.push_back(word);
    }
    return words;
}

std::vector<std::string> DictionaryReader::readWordsFilteredByLength(int length) {
    std::vector<std::string> allWords = readAllWords();
    std::vector<std::string> filteredWords;
    for (const auto& word : allWords) {
        if (word.length() == length) {
            filteredWords.push_back(word);
        }
    }
    return filteredWords;
}