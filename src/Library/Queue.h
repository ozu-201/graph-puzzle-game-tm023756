//
// Created by tm023756 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_TM023756_QUEUE_H
#define GRAPH_PUZZLE_GAME_TM023756_QUEUE_H
#include "Node.h"

namespace list {

    class Queue {
    private:
        Node* first;
        Node* last;
    public:
        Queue();
        ~Queue();
        bool isEmpty();
        Node* dequeue();
        void enqueue(Node* newNode);
    };

#endif //GRAPH_PUZZLE_GAME_TM023756_QUEUE_H
