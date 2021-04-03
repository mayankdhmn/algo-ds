/* 
struct Node {
    int data;
    struct Node *next;
}
*/

// Problem: Reverse a linked list & return its head

struct Node* reverseList(struct Node *head) {
    Node* previous = NULL;
    Node* n = head;
    while (n != NULL) {
        Node* nxt = n -> next;
        n -> next = previous;
        previous = n;
        n = nxt;
    }
    return previous;
}

