//
// Created by tm023756 on 12/14/2023.
//

#include "HeapNode.h"

HeapNode::HeapNode(int data, int name) {
    this->data = data;
    this->name = name;
}

int HeapNode::getData() const{
    return data;
}

int HeapNode::getName() const{
    return name;
}

HeapNode::HeapNode() {

}

void HeapNode::setData(int _data) {
    this->data = _data;
}
