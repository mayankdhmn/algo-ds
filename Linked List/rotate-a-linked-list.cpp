/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

// Problem: Rotate a linked list be k nodes anti-clockwise

// Time Complexity: O(n + k) = O(n)
// Space Complexity: O(1)
Node* rotate(Node* head, int k) {
    Node* last;
    while (last -> next != NULL)
        last = last -> next;
    while (k --) {
        // rotate left a linked list by one step
        last -> next = head;
        last = head;
        Node* newHead = head -> next;
        head -> next = NULL;
        head = newHead;    
    }
    return head;
}

