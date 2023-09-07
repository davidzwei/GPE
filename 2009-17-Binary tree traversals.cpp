#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    char val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(char x) :
        val(x), left(nullptr), right(nullptr) {}
};

TreeNode* help(vector<char>& preorder, vector<char>& inorder, int & index, int l, int r){
    if (l > r) {
        return NULL;
    }

    TreeNode* root = new TreeNode(preorder[index]);

    auto itr = std::find(inorder.begin(), inorder.end(), preorder[index]);
    int mid = distance(inorder.begin(), itr);
    index++;

    root->left = help(preorder, inorder, index, l, mid-1) ;
    root->right = help(preorder, inorder, index, mid + 1, r);

    return root;
}

void print(TreeNode* root){
    if(!root)
        return;
    print(root->left);
    print(root->right);
    printf("%c ", root->val);
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n;
        cin >> n;
        vector<char> preorder(n, 0);
        vector<char> inorder(n, 0);
        for(int i = 0; i<n; i++)
            cin >> preorder[i];
        for(int i = 0; i<n; i++)
            cin >> inorder[i];

        int index = 0;
        TreeNode* root = help(preorder, inorder, index, 0, preorder.size()-1);
        print(root);
        printf("\n");
    }
}
