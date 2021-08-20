#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// A tree node
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int findMax(Node *root)
{
    if (root == NULL)
        return INT_MIN;

    int data = root->data;
    int maxLeft = findMax(root->left);
    int maxRight = findMax(root->right);
    data = max(data, maxLeft);
    data = max(data, maxRight);
    return data;
}

int getMaxHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int leftHeight = getMaxHeight(root->left);
    int rightHeight = getMaxHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
}

int getSize(Node *root)
{
    if (root == NULL)
        return 0;
    int leftSize = getSize(root->left);
    int rightSize = getSize(root->right);

    return leftSize + rightSize + 1;
}

// Function to check if a binary tree is a BST. Note that this
// code allows for duplicate keys.
bool isBST(Node *node, int min, int max)
{
    // Base case. An empty tree is a BST.
    if (node == NULL)
        return true;
    // Checking if a key is outside the permitted range.
    if (node->data < min)
        return false;
    if (node->data > max)
        return false;
    // Sending in updates ranges to the right and left subtree
    return isBST(node->left, min, node->data) &&
           isBST(node->right, node->data, max);
}

bool sameTree(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;

    return root1->data == root2->data &&
           sameTree(root1->left, root2->left) &&
           sameTree(root1->right, root2->right);
}

bool checkSymmetric(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;

    return root1->data == root2->data &&
           checkSymmetric(root1->left, root2->right) &&
           checkSymmetric(root1->right, root2->left);
}

bool isSymmetric(Node *root)
{
    if (root == NULL)
        return true;
    return checkSymmetric(root->left, root->right);
}
Node *invertTree(Node *root)
{
    if (root == NULL)
        return root;

    swap(root->left, root->right);
    invertTree(root->left);
    invertTree(root->right);
    return root;
}

void printDFS_PreOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    printDFS_PreOrder(root->left);
    printDFS_PreOrder(root->right);
}

void printDFS_InOrder(Node *root)
{
    if (root == NULL)
        return;
    printDFS_InOrder(root->left);
    cout << root->data << " ";
    printDFS_InOrder(root->right);
}

void printDFS_PostOrder(Node *root)
{
    if (root == NULL)
        return;
    printDFS_PostOrder(root->left);
    printDFS_PostOrder(root->right);
    cout << root->data << " ";
}

void printBFS(Node *root)
{
    if (root == NULL)
        return;

    // Create an empty queue for level order traversal
    queue<Node *> q;

    // Enqueue Root and initialize height
    q.push(root);

    while (q.empty() == false)
    {
        // Print front of queue and remove it from queue
        Node *node = q.front();
        cout << node->data << " ";
        q.pop();

        /* Enqueue left child */
        if (node->left != NULL)
            q.push(node->left);

        /*Enqueue right child */
        if (node->right != NULL)
            q.push(node->right);
    }
}

int main()
{
    Node *root = new Node(2);
    root->left = new Node(7);
    root->right = new Node(5);
    root->left->right = new Node(6);
    root->left->right->left = new Node(1);
    root->left->right->right = new Node(11);
    root->right->right = new Node(9);
    root->right->right->left = new Node(4);

    cout << "Maximum element is " << findMax(root) << endl;
    cout << "Height of Tree is " << getMaxHeight(root) << endl;
    cout << "Size of Tree is " << getSize(root) << endl;

    Node *rootBST = new Node(6);
    rootBST->left = new Node(3);
    rootBST->right = new Node(9);
    rootBST->left->left = new Node(1);
    rootBST->left->right = new Node(5);
    rootBST->right->left = new Node(9);
    rootBST->right->right = new Node(11);

    cout << "BST? " << std::boolalpha << isBST(rootBST, INT32_MIN, INT32_MAX) << endl;
    cout << "Same Tree? " << std::boolalpha << sameTree(root, rootBST) << endl;
    cout << "Symmetric Tree? " << std::boolalpha << isSymmetric(root) << endl;

    cout << "DFS (Pre-Oder): ";
    printDFS_PreOrder(root);
    cout << endl;

    cout << "DFS (In-Oder): ";
    printDFS_InOrder(root);
    cout << endl;

    cout << "DFS (Post-Oder): ";
    printDFS_PostOrder(root);
    cout << endl;

    cout << "BFS: ";
    printBFS(root);
    cout << endl;

    return 0;
}