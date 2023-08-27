#include<iostream>
#include<vector>
using namespace std;
int go(vector<int>& v,int i, int size){
    int carry=0;
    for(int j=0; j<size ; j++){
        int product = v[j] * i + carry ;
        v[j]= product % 10 ;
        carry = product / 10 ;
    }
    while(carry){
        v[size] = carry % 10 ;
        carry = carry / 10 ;
        size++;
    }
    return size;
}
int main(){
    int n;
    cout<<"No. of element : ";
    cin>>n;

    vector<int> a(500,0);
    int size=1;
    a[0]=1;

    for(int i=2;i<=n;i++){
        size=go(a,i,size);
    }
    // displaying the vector
    for(int i=size-1;i>=0;i--) cout<<a[i]<<" ";

}