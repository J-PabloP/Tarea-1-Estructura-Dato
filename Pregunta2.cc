#include<iostream>
using namespace std;

int Arianiacci(int n);

int main(){
    int num = 0;
    cin>>num; cout<<endl;
    for (int i = 0; i<=num; i++){
        cout<<Arianiacci(i)<<" ";
    }
    cout<<endl; 
    return 0;
}

int Arianiacci(int x){
    if(x==0){
        return 1;
    }
    else if(x==1){
        return 2;
    }
    else if(x==2){
        return 3;
    }
    else{
        return 3*Arianiacci(x-3) + 2*Arianiacci(x-2) - Arianiacci(x-1);
    }
    return 0;
}