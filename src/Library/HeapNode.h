//
// Created by tm023756 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_TM023756_HEAPNODE_H
#define GRAPH_PUZZLE_GAME_TM023756_HEAPNODE_H


class HeapNode {
private:
    int data;
    int name;
public:
    HeapNode(int data, int name);
    HeapNode();
    int getData() const;
    int getName() const;
    void setData(int _data);
};


#endif //GRAPH_PUZZLE_GAME_TM023756_HEAPNODE_H
