
/*The tree node has data, left child and right child
 class Node {
 int data;
 Node* left;
 Node* right;
 };
 
 */

int height(Node* root) {
    if (root->right==NULL && root->left==NULL)
    return 0;
    
    int heightLeft = 0, heightRight = 0;
    if (root->left)
    heightLeft = height(root->left);
    if (root->right)
    heightRight = height(root->right);
    
    return 1 + max(heightLeft, heightRight);
}