/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

// Problem: Return the data of the node where the linked list intersect, or return -1

int length(Node* head) {
    int sz = 0;
    while (head != NULL) {
        sz += 1;
        head = head -> next;
    }
    return sz;
}

int intersectPoint(Node* head1, Node* head2) {
    int len1 = length(head1), len2 = length(head2);
    if (len1 > len2){
        swap(len1, len2);
        swap(head1, head2);
    }
    // The head1 represents the shorted linked list now
    int diff = len2 - len1;
    while ((diff --) && (head2 != NULL)){
        head2 = head2 -> next;
    }
    while (head1 != head2 && (head1 != NULL) && (head2 != NULL)){
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    return (head1 == NULL or head2 == NULL) ? -1 : (head1 -> data); 
}

