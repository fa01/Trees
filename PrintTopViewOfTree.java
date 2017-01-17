/*
 class Node
 int data;
 Node left;
 Node right;
 */
void top_view(Node root)
{
left_view(root.left);
System.out.print(root.data + " ");
right_view(root.right);
}

void left_view(Node root) {
if (root == null) return;
left_view(root.left);
System.out.print(root.data + " ");
}

void right_view(Node root) {
if (root == null) return;
System.out.print(root.data + " ");
right_view(root.right);
}