#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& vect){
    for(int i=0;i<vect.size();i++){
        cout<<vect[i]<<" ";
    }
    cout<<endl;
}
int tripletEqualToX(vector<int>& v , int x){
    int n=v.size() , count=0 ;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(v[i]+v[j]+v[k] == x){
                    cout<<"Triplet : ";
                    cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
                    count++;
                }
            }
        }
    }
    return count;
}
int main(){
    vector<int> v;
    int n;
    cout<<"No. of elements : ";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter element "<<i+1<<" : ";
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    int s;
    cout<<"Sum element : ";   
    cin>>s;
    cout<<endl;
    cout<<"Original Array : ";
    display(v);
    int t = tripletEqualToX(v,s);
    cout<<"No. of triplet : "<<t;
}