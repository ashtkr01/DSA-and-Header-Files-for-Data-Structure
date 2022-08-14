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

node* deleteTail(node * head){
    //Complete this function 
    if(head->next==NULL)
    {
        node* temp=head;
        temp->next=NULL;
        delete temp;
        return NULL;
    }
    head->next = deleteTail(head->next);
    return head;
}

