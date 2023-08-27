// find the largest element factorial and store it in an array
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<"\n";
}
int maxElement(vector<int>& b){
    int max=INT_MIN;
    for(int i=0;i<b.size();i++){
        if(b[i]>max) max=b[i];
    }
    return max;
}
void reverseVector(vector<int>& r){
    int i=0;
    int j=r.size()-1;
    while(i<j){
        int temp=r[i];
        r[i]=r[j];
        r[j]=temp;
        i++;
        j--;
    }
}
void fact(vector<int>& c){
    // finding the largest no. factorial
    int f=1;
    int max=maxElement(c);
    for(int i=2;i<max;i++){
        f*=i;
    }
    int f1=f;
    cout<<"Factorial of "<<max<<" : "<<f<<endl;;
    // counting the digits of factorial
    int count=0;
    while(f>0){
        f/=10;
        count++;
    }
    cout<<"No. of digits : "<<count<<endl;
    // storing the value of factoiral into an array
    vector<int> vect;
    int r=0;
    for(int i=0;i<count;i++){
        r=f1%10;
        vect.push_back(r);
        f1/=10;
    }
    // reversing the factoiral vector
    
    int j=0;
    int k=vect.size()-1;    
        while(j<k){
            int temp=vect[j];
            vect[j]=vect[k];
            vect[k]=temp;
            j++;
            k--;
        }
    
    // displaying the factorial array/vector
    cout<<"Factorial Array : ";
    display(vect);
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
    cout<<"Array : ";
    display(v);
    cout<<"\n";
    int m = maxElement(v);
    cout<<"Largest Element : "<<m<<endl;;
    fact(v);
}