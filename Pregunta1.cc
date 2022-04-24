//recursiva xd

#include <iostream>
using namespace std; 


int factorial_genial(int x);
int main(){
    int n; 
    int par_impar; 
    cout<<"Digite un número entero: "; cin>>n; 
    cout<<factorial_genial(n)<<endl;
    return 0; 
}

int factorial_genial(int x){
    if (x<2){
        return 1;
    }
    else{
        return x*factorial_genial(x-2);
    }
}