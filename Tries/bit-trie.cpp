struct Node {
    Node(){
        num = false;
        child = vector < Node* > (2, NULL);
    }
    vector < Node* > child;
    bool num;
};

struct Trie {
    Node* root;
    int stored;
    
    Trie() {
        root = new Node();
    }
    
    void insert(int num){
        Node* N = root; 
        for (int i = 31; i >= 0; i --){
            int bit = (num >> i) & 1;
            if (N -> child[bit] == NULL)
                N -> child[bit] = new Node();
            N = N -> child[bit];
        }
        N -> num = true;
    }
}    

