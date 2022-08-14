#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};
//Reverse the LinkedList:
node *reverseLinkedList(node *root)
{
    node *prev=NULL;
    node *curr=root;
    while(curr!=NULL)
    {
        node *temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}

int kthLastElement(node * head,int k){
    //Complete this function to return kth last element
    head=reverseLinkedList(head);
     node *temp=head;
    for(int i=1;i<k;i++)
    {
      temp=temp->next;
    }
    return temp->data;
}

node *insertAthead(node *root , int data)
{
  node *temp= new node(data);
  temp->next=root;
  root=temp;
  return root;
}

 //Display the Linked list
   void display(node *root){
       node *temp=root;
       while(temp!=NULL)
       {
           cout<<temp->data<<"-->";
           temp = temp->next;
       }
       cout<<endl;
   }

/*****Main Function*************************/
int main(int argc, char const *argv[])
{
    cout<<"Hi"<<endl;
    node *root = insertAthead(root , 5);
    root = insertAthead(root , 4);
    root = insertAthead(root , 3);
    root = insertAthead(root , 2);
    root = insertAthead(root , 1);
   //To display the LinkedList:
   display(root);

//    root=reverseLinkedList(root);
  
   display(root);
  
  int data=kthLastElement(root,2);
  cout<<data<<endl;
    // cout<<"Index : "<< kthLastElement(root , 3) <<endl;
    return 0;
}
