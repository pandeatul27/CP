#include<bits/stdc++.h>
using namespace std;

struct node
{
 int data;
  node* right_child;
  node* left_child;
};

node* create_node(int val)
{
    node* root=new node;
    root->data=val;
    root->left_child=NULL;
    root->right_child=NULL;
    return root;
}

node* insert(node*root,int val)//O(log n)
{
    if(root==NULL) return create_node(val);
    if(root->data>val)
    {
        root->left_child=insert(root->left_child,val);
    }
    else {
        root->right_child=insert(root->right_child,val);
    }
    return root;
}

void find(node* &cur_node, int item, node* &parent)  
{  
    while (cur_node != NULL && cur_node->data != item)  
    {  
        parent = cur_node;  
        if (item < cur_node->data)  
            cur_node = cur_node->left_child;  
        else  
            cur_node = cur_node->right_child;  
    }  
}  
node* findmax(node* root)
{
    if(root->right_child==NULL) return root;
    return findmax(root->right_child);
}
node* findmin(node* root)
{
    if(root->left_child==NULL) return root;
    return findmin(root->left_child);
}

node* predecesor(node* t)
{
    if (t->left_child == NULL)
     return NULL;
    else
     return findmax(t->left_child);
}

node* successor(node* t)
{
    if (t->right_child == NULL)
     return NULL;
    else
     return findmin(t->right_child);
}

void deletion(node* root,int val)
{
    node* parent = NULL;  
    node* cur = root;  
    find(cur, val, parent); /*find the node to be deleted*/  
    if (cur == NULL)  // if not found then delete
        return;  
    if (cur->left_child == NULL && cur->right_child == NULL) /*When node has no children*/  
    {  
        if (cur != root)  
        {  
            if (parent->left_child == cur)  
                parent->left_child = NULL;  
            else  
                parent->right_child = NULL;  
        }  
        else  
            root = NULL;  
        free(cur);       
    }  
    else if (cur->left_child && cur->right_child)  
    {  
        node* suc  = successor(cur);  
        int val = suc->data;  
        deletion(root, suc->data);  
        cur->data = val;  
    }  
    else  
    {  
        node* child = (cur->left_child)? cur->left_child: cur->right_child;  
        if (cur != root)  
        {  
            if (cur == parent->left_child)  
                parent->left_child = child;  
            else  
                parent->right_child = child;  
        }  
        else  
            root = child;  
        free(cur);  
    }  
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
    Pre_order_traverse(root->left_child);
    Pre_order_traverse(root->right_child);
}

int main()
{
 node* root=NULL;
 root=insert(root,30);
insert(root,20);
insert(root,10);
insert(root,8);
insert(root,15);
insert(root,35);
insert(root,40);
In_order_traverse(root);
cout<<endl;
Pre_order_traverse(root);
cout<<endl;
// node* value=find(root,13);
// if(value==NULL) cout<<"NOT FOUND"<<endl;
// else cout<< "FOUND: "<<value->data<<endl;
node* minimum=findmin(root);
cout<<minimum->data<<endl;
node* maximum=findmax(root);
cout<<maximum->data<<endl;

// deletion(root,15);
// In_order_traverse(root);
// cout<<endl;
// deletion(root,17);
// In_order_traverse(root);
// cout<<endl;
// deletion(root,35);
// In_order_traverse(root);
// cout<<endl;
return 0;
}