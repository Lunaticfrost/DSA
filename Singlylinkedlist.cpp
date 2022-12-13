#include<iostream>
using namespace std;

class Node{
   public:
   int data;
   Node* next;

   //constructor
   Node(int data){
    this ->data = data;
    this ->next= NULL;
   }
   //destructor
   ~Node(){
      int value = this-> data;
      //memory free
      if(this->next != NULL){
        delete next;
        this->next= NULL;
      }
      cout<<"memory is free for node  with data "<< value <<endl;
   }
};
void InsertAtTail(Node* &tail , int d){
    //new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail->next;
}

void InsertAtHead(Node* &head, int d){
    //new node create
    Node* temp = new Node(d);//constructor called
    temp-> next = head;
    head = temp;
}

void PrintNode(Node* &head){
    Node* temp = head;
    
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void InsertAtPosition(Node* &tail,Node* &head,int position, int d){
   //insert at start
   if(position == 1){
    InsertAtHead(head,d);
    return; 
   }

    Node* temp = head;
    int cnt = 1;
    
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    //insert at last
    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return;
    }
    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}
void deleteByValue(int key ,Node* &head){
    Node* temp = head;
    //if key is in head
    if(temp != NULL && temp->data == key){
        head= head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    //if key is not in head
    Node* prev = NULL;
    while(temp!= NULL && temp->data!= key){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    temp->next=NULL;
    delete temp;
    
    
}

void deleteNode(int position, Node* &head){
 //deleting start node
    if(position == 1){
        Node* temp = head;
        head = head->next;
      //memory free start node
      temp->next = NULL;
      delete temp;
    }
    else
    {
    //deleting any middle node or last node
     Node* curr = head;
     Node* prev = NULL;

     int cnt=1;
     while(cnt < position){
        prev = curr;
        curr = curr->next;
        cnt++;
     }

     prev->next = curr->next;
     curr->next = NULL;
     delete curr;
    }
}
void search(int key, Node* &head){
    Node* temp = head;
    if(temp == NULL){
        cout<<"Empty list"<<endl;
       return;
    }
    Node* prev = NULL;
    while(temp!= NULL && temp->data!= key){
        prev = temp;
        temp = temp->next;
    }
    if(temp!=NULL){
        cout<<" found"<<temp->data<<endl;
        return;
    }
    else
    cout<<"not Found "<<endl;
    

}

int main(){
   //create a new node

   Node* node1 = new Node(10);
   //cout<< node1-> data<< endl;
   //cout<< node1-> next<< endl;

//head pointed to node1
Node* head = node1;
Node* tail = node1;
PrintNode(head);
//InsertAtHead(head,12);
InsertAtTail(tail,12);

PrintNode(head);
//InsertAtHead(head,15);
InsertAtTail(tail,15);
PrintNode(head);

InsertAtPosition(tail,head,4,22);
PrintNode(head);
cout<<"head "<< head->data<<endl;
cout<<"tail "<< tail->data<<endl;

//deleteNode(4 , head);
//deleteByValue(15, head);

//PrintNode(head);

search(10,head);
   
    return 0;
}