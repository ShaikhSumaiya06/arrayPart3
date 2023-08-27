#include<iostream>
#include<vector>
using namespace std;
void nonRepeatingElement(vector<int> v,int n){
    bool flag=false;
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++){
            if((i != j) && (v[i] == v[j])) break;
        }
        if(j == n){
            cout<<v[i]<<" is the 1st non-repeating element."<<endl;
            flag=true;
            break;
        }
    }
    if(!flag) cout<<"there is no non-repeating element in the array.";
    cout<<endl;
}
int main(){
    vector<int> v; // 2 1 3 2 5
    int n;
    cout<<"Enter no. of element : ";  
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter element "<<i+1<<" : ";
        cin>>x;
        v.push_back(x);
    }
    cout<<"\n";
    cout<<"Original Array : ";
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<"\n";
    nonRepeatingElement(v,n);
    // bool flag = false;// no non-repeating element
    // for(int i=0;i<n;i++){
    //     int j;
    //     for(j=0;j<n;i++){
    //         if((i != j) && (v[i]==v[j])) break;            
    //     }
    //     if(j == n){
    //         cout<<v[i]<<" is the first non-repeating element. "<<endl;
    //         flag=true;
    //         break;
    //     }
    // }
    // if(flag) cout<<"There is no non-repeating element in the entire array."<<endl;
    // cout<<"Close.";
}