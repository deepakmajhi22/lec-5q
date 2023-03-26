#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;

    if(m%3==0 && m%5==0){
        cout<<"Good number"<<endl;

    }
    else if(m%3==0 && m%5!=0){
        cout<<"Bad number"<<endl;


    }
    else if(m%3!=0 && m%5==0){
        cout<<"poor number"<<endl;

    }

    else{
        cout<<"-1"<<endl;

    }

    return 0;
    }