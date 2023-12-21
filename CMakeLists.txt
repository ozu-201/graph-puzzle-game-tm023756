cmake_minimum_required(VERSION 3.25)
project(graph_puzzle_game_tm023756)

set(CMAKE_CXX_STANDARD 20)


add_library(graph_puzzle_game_tm023756 src/DictionaryReader.cpp src/DictionaryReader.h src/GraphBuilder.cpp src/GraphBuilder.h src/Array/Graph/Graph.cpp src/Array/Graph/Graph.h src/General/AbstractGraph.cpp
        src/General/AbstractGraph.cpp src/General/Path.cpp src/General/Path.h src/Array/DisjointSet.cpp src/Array/DisjointSet.h
        src/Array/Element.h src/Array/Element.cpp src/Array/Hash.cpp src/Array/Hash.h src/Array/Queue.h src/Array/Queue.cpp
        src/Array/Set.cpp src/Array/Set.h src/Array/Stack.h src/Array/Stack.cpp src/Array/Heap/DHeap.cpp src/Array/Heap/DHeap.h
        src/Array/Heap/Heap.cpp src/Array/Heap/Heap.h src/Array/Heap/HeapNode.cpp src/Array/Heap/HeapNode.h src/Array/Heap/MaxDHeap.cpp
        src/Array/Heap/MaxDHeap.h src/Array/Heap/MaxHeap.cpp src/Array/Heap/MaxHeap.h src/Array/Heap/MinDHeap.cpp src/Array/Heap/MinDHeap.h
        src/Array/Heap/MinHeap.cpp src/Array/Heap/MinHeap.h src/Tree/Tree.cpp src/Tree/Tree.h src/Tree/TreeNode.cpp src/Tree/TreeNode.h
        src/List/Graph/Edge.cpp src/List/Graph/Edge.h src/List/Graph/EdgeList.cpp src/List/Graph/EdgeList.h src/List/DoublyLinkedList.h
        src/List/DoublyLinkedList.cpp src/List/DoublyNode.h src/List/DoublyNode.cpp src/List/Hash.h src/List/Hash.cpp src/List/LinkedList.h
        src/List/LinkedList.cpp src/List/Node.h src/List/Node.cpp src/List/Queue.cpp src/List/Queue.h src/List/Stack.cpp src/List/Stack.h
        src/Tree/Queue.h src/Tree/Queue.cpp src/Tree/Stack.h src/Tree/Stack.cpp src/Tree/Element.h src/Tree/Element.cpp src/GraphBuilder.cpp src/GraphBuilder.h src/BFS.cpp src/BFS.h)

add_executable(graph_puzzle_game_tm023756
        main.cpp
        main.h src/GraphBuilder.h src/GraphBuilder.cpp src/DictionaryReader.h src/DictionaryReader.cpp src/BFS.h src/BFS.cpp src/Library/AbstractGraph.cpp src/Library/AbstractGraph.h src/Library/DisjointSet.cpp src/Library/DisjointSet.h src/Library/Edge.cpp src/Library/Edge.h src/Library/EdgeList.cpp src/Library/EdgeList.h src/Library/Graph.cpp src/Library/Graph.h src/Library/Heap.cpp src/Library/Heap.h src/Library/HeapNode.cpp src/Library/HeapNode.h src/Library/MinHeap.cpp src/Library/MinHeap.h src/Library/Node.cpp src/Library/Node.h src/Library/Path.cpp src/Library/Path.h src/Library/Queue.cpp src/Library/Queue.h src/Library/Set.cpp src/Library/Set.h)