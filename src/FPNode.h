// FPNode.h
#include<vector>
#include<string>
// #include<map>

#ifndef FPNODE_H
#define FPNODE_H


class FPNode {
    private:
        std::string value;
        int count;
        FPNode* parent;
        // std::map link;
        std::vector<FPNode*> children;
    public:
        FPNode(std::string, int, FPNode*);
        ~FPNode();

        void add_child(std::string);
        int get_count();
        FPNode* get_child(std::string); 
        std::string get_value();

};
#endif
