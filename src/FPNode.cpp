#include "FPNode.h"
#include <iostream>
#include <string>

FPNode::FPNode(std::string val, int cnt, FPNode* parnt) {    
    value = val;
    count = cnt;
    parent = parnt;
}

std::string FPNode::get_value() {
    return value;
}

int FPNode::get_count() {
    return count;
}


FPNode::~FPNode() {
    for (auto &it : children) {
        delete it;
    }
}

void FPNode::add_child(std::string val) {
    FPNode child {val, 1, this};
    children.push_back(&child);
}


FPNode* FPNode::get_child(std::string val) {
    for (auto &it : children) {
        if (it->get_value() == val) {
            return it;
        }
    }
}

                

int main() {
    FPNode node1 ("abc", 137, nullptr);
    std::cout << node1.get_value() << std::endl;
    node1.add_child("xyz");

    std::cout << node1.get_child("xyz") << std::endl;
}


