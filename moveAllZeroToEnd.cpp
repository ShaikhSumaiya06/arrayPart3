/*
move all zeros to the end of the array.
(relative ordering must not be disturbed)
eg : 4 0 6 0 7 8
o/p : 4 6 7 8 0 0 
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<"\n";
}

int main(){
    vector<int> v;
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
    cout<<"Before Changing Array : ";
    display(v);
    cout<<"\n";
    int j=0;
    for(int i=0;i<n;i++){
        if(v[i] != 0){
            swap(v[i],v[j]);
            j++;
        }
    }
    cout<<"After changing Array : ";
    display(v);
    cout<<"\n";
}