cmake_minimum_required(VERSION 3.25)
project(graph_puzzle_game_tm023756)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(graph_puzzle_game_tm023756
        src/Reader.cpp
        src/Reader.h src/Library/AbstractGraph.cpp src/Library/AbstractGraph.h src/Library/DisjointSet.cpp src/Library/DisjointSet.h src/Library/Edge.cpp src/Library/Edge.h src/Library/EdgeList.cpp src/Library/EdgeList.h src/Library/Graph.cpp src/Library/Graph.h src/Library/Heap.cpp src/Library/Heap.h src/Library/HeapNode.cpp src/Library/HeapNode.h src/Library/MinHeap.cpp src/Library/MinHeap.h src/Library/Node.cpp src/Library/Node.h src/Library/Path.cpp src/Library/Path.h src/Library/Queue.cpp src/Library/Queue.h src/Library/Set.cpp src/Library/Set.h)
