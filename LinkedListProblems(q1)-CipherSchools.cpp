#include<bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNose() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode * removeDuplicateNodes(ListNode *head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }
    ListNode * curr = head, *next = NULL;
    while (curr->next != NULL) {
        if(curr->val == curr->next->val) {
            next = curr->next;
            curr->next = next->next;
            delete(next);
        } else {
            curr = curr->next;
        }
    }
    return head;
}

int main() {
    struct Node* start = newNode(10);
    start->next = newNode(12);
    start->next->next = newNode(11);
    start->next->next->next = newNode(11);
    start->next->next->next->next = newNode(12);
    start->next->next->next->next->next = newNode(11);
    start->next->next->next->next->next->next = newNode(10);
 
    removeDuplicateNodes(start);
 
    return 0;
}
