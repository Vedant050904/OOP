//In linear searching there is no need of sorted Arrays.

#include <iostream>
using namespace std;

int linearsearch(int n,int B[], int key){
    for(int i=0;i<B[n];i++){
    if(B[i]==key){
    cout<<"Given key is on index: ";
    return i;   
    }
}
return -1;
}

int main(){

int n;
cout<<"Enter the number of elements in your array: ";
cin>>n;
int B[n];
for(int i=0;i<n;i++){
    cout<<"Enter the element B["<<i<<"]: "; 
    cin>>B[i];
}    
int key;
cout<<"Enter the number you want to find: ";
cin>>key;

cout<<linearsearch( n,B,key);

    return 0;
}