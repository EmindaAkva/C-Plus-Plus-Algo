#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {

    vector<int> vec = {4, 2, 3, 2, 5};

    // print the vector before deletion
    cout << "Before deletion: ";
    for(int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    // remove the occurrence of 2
    remove(vec.begin(), vec.end(), 2);


    // print the vector after deletion
    cout << "After deletion: ";
    for(int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}