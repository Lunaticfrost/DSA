#include<bits/stdc++.h>
using namespace std;

 //time - log n , space = constant;
void merge(int a[], int b[], int n, int m) {
  // code here 
  int gap= ceil((float)(m+n)/2);
  
  while(gap>=1){
    int i=0;
    int j=gap;
    while(j<(m+n)){
        if(j<n && a[i]>a[j]){
            swap(a[i],a[j]);
        }else if(j>=n && i<n && a[i]>b[j-n]){
            swap(a[i],b[j-n]);
        }else if(j>=n && i>=n && b[i-n]>b[j-n]){
            swap(b[i-n],b[j-n]);

        }
        i++;
        j++;
    }
    if(gap==1){
        gap=0;
    }else{
        gap=ceil((float)(gap/2));
    }

  }
  
}
int main() {
  int a[] = {1,4,7,8,10};
  int b[] = {2,3,9};
  cout << "Before merge:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < 3; i++) {
    cout << b[i] << " ";
  }
  cout << endl;
  merge(a, b, 5, 3);
  cout << "After merge:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < 3; i++) {
    cout << b[i] << " ";
  }

}