vector<vector<int>> findLeaves(TreeNode * root) {
    vector < vector < int > > result;
    function < int(TreeNode*) > post_order = [&](TreeNode* root){
        if (!root)
            return -1;
        int left = post_order(root -> left), right = post_order(root -> right);
        int level = max(left, right) + 1;
        if (level == result.size())
            result.push_back(vector < int > () );
        result[level].push_back(root -> val);
        return level;

    };
    post_order(root);
    return result;
}

