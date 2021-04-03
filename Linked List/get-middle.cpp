/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

int getMiddle(Node *head) {
    Node* hare = head;
    Node* tortoise = head;
    if (head == NULL)
        return -1;
    while (hare != NULL && hare -> next != NULL) {
        tortoise = tortoise -> next;
        hare = hare -> next -> next;
    }
    return tortoise -> data;
}


