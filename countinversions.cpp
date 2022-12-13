#include<bits/stdc++.h>
using namespace std;
 
 int merge(int arr[],int temp[],int start, int mid, int end){

    int ic=0;
    int i=start;
    int j=mid;
    int k=start;
     
     while(i<mid && j<=end){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            ic=ic+(mid-i); 
        }
     }
    while(i<mid){
        temp[k++]=arr[i++];
    } 
    while(j<=end){
        temp[k++]=arr[j++];
    }
    for(int i=start;i<=end;i++){
        arr[i]=temp[i];
    }
    return ic;

 }
 
 int countInversions(int arr[],int temp[],int start,int end){
     int mid,ic=0;
     if(end>start){
        mid=(start+end)/2;
       ic+= countInversions(arr,temp,start,mid);
       ic+= countInversions(arr,temp,mid+1,end);

       ic+=merge(arr,temp,start,mid+1,end);
     }
     return ic;
 }
 
 
 int main(){
   int arr[]={5,4,3,2,1};
   int n=5;
   int temp[n];
   cout<<countInversions(arr,temp,0,n-1);;
   return 0;

 }