#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;
     node()
     {
         
     }
	node(int data){
		this->data = data;
		next = NULL;
	}
};

node* alternateMerge(node * root1, node* root2){
    //Complete this function 
    node *first=root1;
    node *second=root2;
    node *head=NULL;
    node *final_head=NULL;
    while(second!=NULL and first!=NULL)
    {
        node *temp=first->next;
        node *temp2=second->next;
         if(head==NULL)
         {
             head=first;
             final_head=head;
         }
         else if(head!=NULL)
         {
             head->next=first;
             head=head->next;
         }
         
         head->next=second;
         head=head->next;
        second=temp2;
        first=temp;
    }
    while(first!=NULL)
    {
        head->next=first;
        head=head->next;
        first=first->next;
    }
    while(second!=NULL)
    {
        head->next=second;
        head=head->next;
        second=second->next;
    }
    head->next=NULL;
    return final_head;
}

//Function of Createion linked list:
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
    node *root1 = NULL;
    root1 = insertAthead(root1 , 9);
    root1 = insertAthead(root1 , 7);
    root1 = insertAthead(root1 , 5);
    root1 = insertAthead(root1 , 3);
    root1 = insertAthead(root1 , 1);
   //To display the LinkedList-1:
   display(root1);

    node *root2=NULL;
    root2 = insertAthead(root2 , 10);
    root2 = insertAthead(root2 , 8);
    root2 = insertAthead(root2 , 6);
    root2 = insertAthead(root2 , 4);
    root2 = insertAthead(root2 , 2);
  // To display the LinkedList-2:
   display(root2);

    node *temp3=NULL;
    temp3=alternateMerge(root1 , root2);

    display(temp3);
    return 0;
}



