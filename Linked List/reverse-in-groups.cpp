struct node *reverse (struct node *head, int k) { 
    node* prev = NULL;
    node* n = head;
    node* nxt;
    int counter = k;
    while (n != NULL && (counter --)) {
        nxt = n -> next;
        n -> next = prev;
        prev = n;
        n = nxt;
    }
    if (head != NULL)
        head -> next = reverse(nxt, k);
    return prev;
}

