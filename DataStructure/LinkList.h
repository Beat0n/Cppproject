//
// Created by jizhe hu on 2022/10/1.
//

#ifndef PROJECTS_LINKLIST_H
#define PROJECTS_LINKLIST_H

class Node {
public:
    char data;
    Node* next;
};

class LinkList {
private:
    Node* head;
    int length;
public:
    LinkList();
    ~LinkList();
    int ListLength();
    bool isEmpty();
    bool Insert(int i, char e);
    bool DeleteElem(int i);
    bool getElemByIndex(int i, char *e);
    int getIndexByElem(char e);
};


#endif //PROJECTS_LINKLIST_H
