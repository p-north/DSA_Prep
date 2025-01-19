vector<int> preorderTraversal(TreeNode *root)
{
    // Preorder: Root, Left, Right

    // vector store
    vector<int> res;
    // if reached null ptr, return the vector
    if (!root)
    {
        return res;
    }

    // R
    res.push_back(root->val);
    // Get left values
    vector<int> left = preorderTraversal(root->left);
    // Get right values
    vector<int> right = preorderTraversal(root->right);

    // insert left vals
    res.insert(res.end(), left.begin(), left.end());
    // insert right vals
    res.insert(res.end(), right.begin(), right.end());

    // return the vector
    return res;
}

vector<int> inorderTraversal(TreeNode *root)
{
    // Left Root Right
    vector<int> res;
    if (!root)
    {
        return res;
    }

    // L
    vector<int> left = inorderTraversal(root->left);
    res.insert(res.end(), left.begin(), left.end());
    // Root
    res.push_back(root->val);
    // Right
    vector<int> right = inorderTraversal(root->right);
    res.insert(res.end(), right.begin(), right.end());

    return res;
}

vector<int> postorderTraversal(TreeNode *root)
{
    // Left, Right, Root

    vector<int> res;
    if (!root)
    {
        return res;
    }

    // L
    vector<int> left = postorderTraversal(root->left);
    res.insert(res.end(), left.begin(), left.end());
    // R
    vector<int> right = postorderTraversal(root->right);
    res.insert(res.end(), right.begin(), right.end());
    // Root
    res.push_back(root->val);

    return res;
}