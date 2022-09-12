#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
int height;
node* left_child;
node* right_child;
};

int height(node* root)
{
    if (root == NULL)
        return 0;
    return root->height;
}

int bf(node* root)
{
    if(root==NULL) return 0;
    return height(root->left_child)-height(root->right_child);
}
node* createNode(int val)
{
   node* root=new node;
   root->data=val;
   root->left_child=NULL;
   root->right_child=NULL;
   root->height=1;
   return root;
}

node* rightRotate(node *y)
{
    node* x = y->left_child;
    node* temp = x->right_child;
 
    x->right_child = y;
    y->left_child = temp;
 
    y->height = max(height(y->left_child),
                    height(y->right_child)) + 1;
    x->height = max(height(x->left_child),
                    height(x->right_child)) + 1;
    return x;
}

node* leftRotate(node* x)
{
   node* y=x->right_child;
   node *temp=y->left_child;

   y->left_child=x;
   x->right_child=temp;

   y->height = max(height(y->left_child),
                    height(y->right_child)) + 1;
    x->height = max(height(x->left_child),
                    height(x->right_child)) + 1;

    return y;
}

node* insertion(node* root, int val)
{
    if(root==NULL) root=createNode(val);
    if(root->data<val)
    {
        root->right_child=insertion(root->right_child,val);
    }
    else if(root->data>val){
        root->left_child=insertion(root->left_child,val);
    }
    else return root;

    root->height=1+max(height(root->left_child),height(root->right_child));
    int balance_factor=bf(root);
    
    // Left Left Case
     if (balance_factor==2 && val < root->left_child->data)
        return rightRotate(root);
 
    // Right Right Case
    if (balance_factor==-2 && val > root->right_child->data)
        return leftRotate(root);
 
    // Left Right Case
    if (balance_factor==2 && val > root->left_child->data)
    {
        root->left_child = leftRotate(root->left_child);
        return rightRotate(root);
    }
 
    // Right Left Case
    if (balance_factor==-2 && val < root->right_child->data)
    {
        root->right_child = rightRotate(root->right_child);
        return leftRotate(root);
    }
 
    /* return the (unchanged) node pointer */
    return root;
}

void In_order_traverse(node* root)// O(n)
{
    if(root==NULL) return;
    In_order_traverse(root->right_child);
    cout<<root->data<<" ";
    In_order_traverse(root->left_child);
}
void Pre_order_traverse(node* root)// O(n)
{
    if(root==NULL) return;
    cout<<root->data<<" ";
    In_order_traverse(root->left_child);
    In_order_traverse(root->right_child);
}

int main()
{
    node* root=NULL;
    root=insertion(root,10);
    root=insertion(root,30);
    root=insertion(root,20);
    root=insertion(root,15);
    root=insertion(root,25);

    Pre_order_traverse(root);
    cout<<endl;
    In_order_traverse(root);
    cout<<endl;
return 0;
}