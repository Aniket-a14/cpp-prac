#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<"  ";
        }
        for(int j=0;j<i;j++){
            cout<<char('A'+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}