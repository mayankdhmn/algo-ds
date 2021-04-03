/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/

bool detectLoop(Node* head) {
    Node* hare = head;
    Node* tortoise = head;
    if (hare == NULL)
        return false;
    while (hare -> next != NULL && hare -> next -> next != NULL) {
        if (hare == tortoise)
            return true;
        hare = hare -> next -> next;
        tortoise = tortoise -> next;
    }
    return false;
}

