#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int c=200;
    string d = "cat";
    cout<<c<<"  "<<&c<<endl;
    cout<<&d<<endl;
    string& b = d;
    d = "dog";
    cout<<"&b : "<<&b<<" &d : "<<&d;

    int e = c;
    cout <<"E : "<< e <<" C :"<<c<<endl;
    e+=1;
    cout <<"E : "<< e <<" C :"<<c<<endl;

    int myvar = 25;
    cout <<"My Var : "<< myvar<<endl;
    int& tmp = myvar;
    tmp = 20;
    cout <<"My Var : "<< myvar<<" Tmp: "<< tmp<<endl;

    int* t = &myvar;
    cout <<"T : "<< *t<<endl;
    // cout <<" : "<< *myvar<<endl; doesn;t work
    int l;
    cout <<"L : "<< l<<endl;
    // pointer baz = *c;
    return 0;
}