/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int getHeight(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int leftsubtree=getHeight(root->left);
        int rightsubtree=getHeight(root->right);
        int maxHeight=max(leftsubtree,rightsubtree);
        int totalheight=maxHeight+1;
        return totalheight;
    }
    bool isBalanced(TreeNode* root) {
        //Time complexity-0(n^2)
        if(root==NULL){
            return true;
        }
        //current node pr check laga ra hu
        //1 case solve krra hu
        int leftsubtree=getHeight(root->left);
        int rightsubtree=getHeight(root->right);
        int absdiff=abs(leftsubtree-rightsubtree);
        bool status= (absdiff <= 1);
        
        //baaki recursion sambhal lega
        bool balancedleftsubtree=isBalanced(root->left);
        bool balancedrightsubtree=isBalanced(root->right);

        //i can say whether tree is balanced or not, when
        //curr node is blanced and 
        //left subtree is balanced and
        //right subtree is balanced
        if(status && balancedleftsubtree && balancedrightsubtree ){
            return true;
        }
        else{
            return false;
        }


    }
};