#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
 
 //Function to calculate size of linked list:
 int sizeOfLinkedList(node* head)
 {
     node* temp=head;
     int count=0;
     while(temp!=NULL)
     {
         temp=temp->next;
       count++;
     }
     return count;
 }

node* bubble_sort_LinkedList_itr(node* head)
{ 
    int size=0;
    size = sizeOfLinkedList(head);
    // your code goes here
    node* root=new node(-1);
    root->next=head;
   
   for(int i=0;i<size;i++)
   {

   node* temp=root->next;
   node*temp2=root->next->next;
   node* prev=root;
   while(temp->next!=NULL)
   {
     if(temp->data > temp2->data)
     {
       node* nextt =temp2->next;
    
           
           
       
       
           prev->next=temp2;
    
       prev=temp2;
       temp2->next=temp;
       temp->next=nextt;
       temp2=nextt;

     }
     else{
         prev=temp;
         temp=temp->next;
         temp2=temp2->next;
     }
   }
   }
    return root->next;;
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
    node* root=NULL;
    root = insertAthead(root , 1);
    root = insertAthead(root , 4);
    root = insertAthead(root , 3);
    root = insertAthead(root , 2);
    root = insertAthead(root , 5);
   //To display the LinkedList:
   display(root);

node* temp=NULL;
 temp=  bubble_sort_LinkedList_itr(root);

 display(temp);

    return 0;
}
