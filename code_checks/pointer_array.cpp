// more pointers
#include <iostream>
using namespace std;

int main ()
{
    int numbers[5];
    cout << "Numbers : "<<numbers<<endl;
    cout << "Numbers 0: "<<numbers[0]<<endl;
    int * p;
    p = numbers;  *p = 10;
    cout << "Numbers : "<<numbers<<endl;
    cout << "Numbers 0 : "<<numbers[0]<<&numbers[0]+1<<endl;
    p++;  *p = 20;
    p = &numbers[2];  *p = 30;
    p = numbers + 3;  *p = 40;
    p = numbers;  *(p+4) = 50;
    for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";

    int myvar=10;
    int *foo = &myvar;
    cout << "Foo Address: "<<foo<<endl;
    int *bar = foo;
    cout << "Bar Address: "<<bar<<" "<<*bar<<endl;
    // cout << "Foo Address: "<<foo++<<"Foo Address: "<<*foo<<endl; Not allowed as foo is trying to go to uninitalised place
    int tmps[10]={10};
    cout << "Tmps: "<<sizeof(tmps)<<endl;

    char t = 'y';
    t+=1;
    cout<<t<<endl;
    return 0;
}