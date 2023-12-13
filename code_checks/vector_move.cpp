#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {

    vector<string> source = {"cat","apple", "banana", "cherry","orange"};
    vector<string> destination(3);

    cout << "vector begin:"<<endl;

    cout << "Before move:" << endl;
    cout << "source: ";

    for(const string str : source) {
        cout << str << " ";
    }
    cout << endl;

    cout << "destination: ";
    for(const string& str : destination) {
        cout << str << " ";
    }
    cout << endl;

    // perform the move operation
    move(source.begin()+1, source.end()-1, destination.begin());


    cout << "After move:" << endl;
    cout << "source length : " << source[0].empty() << '\n';
    cout << "source: ";
    for(const string& str : source) {
        cout << str << " ";
    }
    cout << endl;

    cout << "destination: ";
    for(const string& str : destination) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}