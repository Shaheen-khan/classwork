#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data; //node will store an integer
    struct node *right_child; // right child
    struct node *left_child; // left child
};

struct node* search(struct node *root, int x)
{
    if(root==NULL || root->data==x) //if root->data is x then the element is found
        return root;
    else if(x>root->data) // x is greater, so we will search the right subtree
        return search(root->right_child, x);
    else //x is smaller than the data, so we will search the left subtree
        return search(root->left_child,x);
}


struct node* new_node(int x)
{
    struct node *p;
    p = malloc(sizeof(struct node));
    p->data = x;
    p->left_child = NULL;
    p->right_child = NULL;

    return p;
}

struct node* insert(struct node *root, int x)
{
    //searching for the place to insert
    if(root==NULL)
        return new_node(x);
    else if(x>root->data) // x is greater. Should be inserted to right
        root->right_child = insert(root->right_child, x);
    else // x is smaller should be inserted to left
        root->left_child = insert(root->left_child,x);
    return root;
}

// funnction to delete a node

void inorder(struct node *root)
{
    if(root!=NULL) // checking if the root is not null
    {
        inorder(root->left_child); // visiting left child
        printf(" %d ", root->data); // printing data at root
        inorder(root->right_child);// visiting right child
    }
}
void preorder(struct node *root)
{
    if(root !=NULL)
    {

        printf("%d " ,root->data);
        preorder(root->left_child);
        preorder(root->right_child);
    }
}
void postorder(struct node *root)
{
    if(root !=NULL)
    {
        postorder(root->right_child);
        printf("%d " ,root->data);
        postorder(root->left_child);

    }
}
int main()
{
    struct node *root=NULL;
    int n,j,l;
    printf("Enter total number:");
    scanf("%d",&n);
    scanf("%d",j);
      root=new_node(j);
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",l);
        insert(root,l);
    }

    printf("Data inserted");
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
}

