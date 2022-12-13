#include<bits/stdc++.h>
using namespace std;

void smallest(int a[],int n){
    int min=a[0];
    int pos=0;
   for(int i=0;i<n;i++){
      
      if(a[i]<min){
          min = a[i];
          pos=(i+1);
      }
      
   }
   cout<<"smallest element is "<<min<<" at position "<<pos<<endl;
  
}
void formdigits(int a[],int n){

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum= (sum*10)+a[i];
    }
    cout<<"the number is "<<sum<<endl;
}

int secondlargest(int a[],int n){
    sort(a,a+n);
    if(n<2){
        cout<<"no sorry byebye khatam"<<endl;
        return 0;
    }
    for(int i=n-2;i>=0;i--){
        if(a[i]!=a[n-1]){
           cout<<"second largest is "<<a[i]<<endl;
           return 0;
        }
    }
    cout<<"no second largest element"<<endl;

    
  
}

int duplicate(int a[], int n){
    int temp;
    int cnt =0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cout<<"yes duplicate is present"<<endl;
                temp=a[i];
                cout<<"the number is "<<temp<<endl;
                
            }
            
        }

        
    }
    return 0;
    
}



int insert(int a[], int n , int pos, int d){
    n=n+1;
    for(int i=n-1;i>=pos;i--){
      a[i+1] = a[i];
    }
    a[pos]=d;

    cout<<"the new array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}




int main(){

    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements: "<<endl;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<endl;
    }
   //formdigits(a,n);
   //smallest(a,n);
   //secondlargest(a,n);
   //duplicate(a,n);
   int pos, d;
   cout<<"enter position"<<endl;
   cin>>pos;
   cout<<endl<<"enter element to add : "<<endl;
   cin>>d;
   cout<<endl;
   insert(a,n,pos,d);




    


    return 0;
}