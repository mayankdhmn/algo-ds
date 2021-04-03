bool areEqual(TreeNode* s, TreeNode* t) {
  if (s == nullptr || t == nullptr) {
    return s == t;  // both null
  }
  return s->val == t->val
    && areEqual(s->left, t->left)
    && areEqual(s->right, t->right);
}

bool isSubtreeHelp(TreeNode* s, TreeNode* t) {
  return areEqual(s, t)
    || (s->left && isSubtree(s->left, t))
    || (s->right && isSubtree(s->right, t));
}

bool isSubtree(TreeNode* a, TreeNode* b){
  if (isSubtree(a, b)){
    return 1;
  }else{
    return -1;
  }
}
