//
// Created by tm023756 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_TM023756_HEAP_H
#define GRAPH_PUZZLE_GAME_TM023756_HEAP_H


#include "HeapNode.h"

class Heap {
protected:
    HeapNode *array;
    int count;
    int N;
    void swapNode(int index1, int index2);
    virtual void percolateDown(int no) = 0;
    virtual void percolateUp(int no) = 0;
public:
    explicit Heap(int N);
    ~Heap();
    bool isEmpty() const;
    bool isFull() const;
    HeapNode deleteTop();
    void insert(HeapNode node);
    virtual void update(int k, int newValue) = 0;
    int search(int name);
};


#endif //GRAPH_PUZZLE_GAME_TM023756_HEAP_H
