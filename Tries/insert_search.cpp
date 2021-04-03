class node {
    node() {
        word = false;
        child = vector < node* > (26, NULL);
    }        
    vector <node*> child;
    bool word; // replace with int for storing the "number" of words, bool for occurance
};

class trie {
private:
    node* root;
    
public:
    trie() {
        root = new node();
    }
    
    void insert(string A) {
        node* N = root;
        for (auto c : A) {
            c -= 'a';
            if (N -> child[c] == NULL) {
                N -> child[c] = new node();
            }
            N = N -> child[c];
        }
        N -> word = 1;
    }
    
    bool find(string A) {
        node* N = root;
        for (auto c : A) {
            c -= 'a';
            if (N -> child[c] == NULL) {
                return false;
            }
            N = N -> child[c];
        }
        return (N -> word);
    } 
};

