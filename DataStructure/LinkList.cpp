//
// Created by jizhe hu on 2022/10/1.
//

#include "LinkList.h"

LinkList::LinkList(): head(new Node()), length(0) {
    head->next = nullptr;
}

LinkList::~LinkList() {
    Node* p, *pre;
    pre = head;
    while (pre->next) {
        p = pre->next;
        delete pre;
        pre = p;
    }
    delete pre;
}

bool LinkList::Insert(int i, char e) {
    Node* p = head;
    int num = 0;
    while (!p && num != i - 1) {
        num++;
        p = p->next;
    }
    if (!p) return false;
    Node* newNode = new Node();
    newNode->data = e;
    newNode->next = p->next;
    p->next = newNode;
    length++;
    return true;
}

bool LinkList::DeleteElem(int i) {
    int num = 0;
    Node* p = head;
    while (!p && num != i - 1) {
        num++;
        p = p->next;
    }
    if (!p || !p->next) return false;
    p->next = p->next->next;
    delete p->next;
    length--;
    return true;
}

int LinkList::ListLength() {
    return length;
}

bool LinkList::isEmpty() {
    return length == 0;
}

bool LinkList::getElemByIndex(int i, char *e) {
    Node* p = head;
    int num = 0;
    while(!p && num != i) {
        p = p->next;
        num++;
    }
    if (!p) return false;
    *e = p->data;
    return true;
}

int LinkList::getIndexByElem(char e) {
    Node* p = head;
    int i = 0;
    while(!p) {
        p = p->next;
        i++;
        if (p->data == e) {
            return i;
        }
    }
    return -1;
}



