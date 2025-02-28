#include <iostream>
#include <vector>
using namespace std;

void printMemVec(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << "Value: "<< v[i] << " Located At: ";
        cout << &v[i] << endl;
    }
}


void incVecBy10(vector<int>& v){
    for (int i = 0; i < 5; i++) { 
        v[i] += 10;
    }
}

int main() {
    // create a constant integer called SIZE that is of value 5
    int SIZE = 5;
    // create a vector of integers called vec that can hold up to 5 elements
    vector<int> vec;
    //use a for loop to populate vec with the values 100 to 104
    for (int i = 0; i < 5; i++) {
        vec.push_back(i+100);
    }
    printf("Before Increment--\n");
    printMemVec(vec);
    incVecBy10(vec);
    printf("After Increment--\n");
    printMemVec(vec);
    //call printMemVec (...) on vec again to view the changes
    // remove last element of vec
    // (refer to docs https://cplusplus.com/reference/vector/vector/#google_vignette)
    printf("After Pop--\n");
    vec.pop_back();
    printMemVec(vec);
    //call printMemVec(...) on vec again to view the changes
    // append 101 and 102 at the end of vec
    // (refer to docs https://cplusplus.com/reference/vector/vector/#google_vignette)
    printf("After Push‒‒\n");
    vec.push_back(101);
    vec.push_back(102);
    printMemVec(vec);
    //call printMemVec (...) on vec again to view the changes
    return 0;
    }