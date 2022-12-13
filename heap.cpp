#include<iostream>
#include<queue>
using namespace std;


class heap{
 public: 
   int arr[100];
   int size=0;
    
    heap(){
        arr[0]=-1;
        size=0;
    }


   void insert(int val){
    //O(log N) Time Complexity;

    size=size+1;
    int index=size;
    arr[index]=val;

    while(index>1){
        int parent=index/2;

        if(arr[parent]<arr[index]){
            swap(arr[parent],arr[index]);
            index= parent;
        }
        else{
            return ;
        }
    }

   }


  void print(){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
  }



  void deletefromheap(){
    if(size == 0){
        cout<<"Nothing to delete"<<endl;
        return;
    }
    //step1= put last element into first index;
    arr[1]=arr[size];
    //step2=remove last element;
    size--;

    //step3=take root node to its correct position

    int i=1;
    while(i<size){
        int leftindex=2*i;
        int rightindex=2*i+1;

        if(leftindex<size && arr[i]<arr[leftindex])
        {
            swap(arr[i],arr[leftindex]);
            i=leftindex;
        }
        else if(rightindex<size && arr[i]<arr[rightindex])
        {
            swap(arr[i],arr[rightindex]);
            i = rightindex;
        }
        else{
            return ;
        }


    }

  }

};

 void heapify(int arr[],int n,int i){

     int largest =i;
     int left=2*i;
     int right=2*i+1;

     if(left<=n && arr[largest]< arr[left]){
        largest = left;
     }
     if(right<=n && arr[largest]<arr[right]){
        largest =right;
     }

     if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
     }
 }

 void heapSort(int arr[],int n){

    int size=n;
    while(size>1){

        //step1: SWAP
         swap(arr[size],arr[1]);
         size--;

         //step2: correct position
         heapify(arr,size,1);

    }


 }


int main(){

   heap h;
   h.insert(50);
   h.insert(55);
   h.insert(53);
   h.insert(52);
   h.insert(54);
   h.print();

   h.deletefromheap();
   h.print();


   int arr[6]={-1,54,53,55,52,50};
   int n=5;
   for(int i=n/2;i>0;i--){
    heapify(arr,n,i);
   }
   cout<<"printing the array now"<<endl;
   for(int i=1;i<n;i++){
    cout<<arr[i]<<" ";
   }cout<<endl;

   heapSort(arr,n);

   cout<<"printing the sorted heap now"<<endl;
   for(int i=1;i<n;i++){
    cout<<arr[i]<<" ";
   }cout<<endl;




   cout<<"Using priority queue here"<<endl;

   //maxheap using pq
    priority_queue<int>pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    cout<<"element on top  "<<pq.top()<<endl;
    pq.pop();
    cout<<"element on top  "<<pq.top()<<endl;


    //minheap using pq
    priority_queue<int,vector<int>,greater<int>>minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);
    cout<<"element on top  "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"element on top  "<<minheap.top()<<endl;




    return 0;
}