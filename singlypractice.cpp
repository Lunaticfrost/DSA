#include<iostream>
using namespace std;

class Node{
   public:
    int data;
    Node* next;

    //constructor
    Node(int data){
          this->data= data;
          this->next= NULL;
    }

};

void InsertatHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertatTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void InsertAtPosition(Node* &tail, Node* &head , int position , int d){
         if(position==1){
            InsertatHead(head,d);
            return;
         }
         Node* temp = head;

        int cnt=1;
        while(cnt<position-1){
            temp = temp->next;
            cnt++;
        }
        if(temp->next== NULL){
         InsertatTail(tail,d);
         return;
        }

        Node* Nodetoinsert = new Node(d);
        Nodetoinsert->next= temp->next;
        temp->next = Nodetoinsert;
        

}
void DeleteNode()

int main(){

   Node* n1 = new Node(10);
   Node* head = n1;
   Node* tail = n1;

   InsertatHead(head,5);
   print(head);
   InsertatTail(tail,101);
   print(head);
   InsertAtPosition(tail, head , 2 , 20);
   print(head);

    return 0;
}