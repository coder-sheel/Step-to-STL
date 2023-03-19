#include <iostream>
#include <vector>
using namespace std;

//Define vector function such as to take input in it as per its size
// we are using reference to pass the actual value not the copied value
void printVec(vector<int> &v){
    cout << "size : " << v.size() <<endl;
    for(int i=0 ; i< v.size() ; i++){
        // v.size() -> 0(1)
        cout << v[i] << " ";
    }
    v.push_back(2);
    cout << endl;
}

int main(){
// declaring and pre-filling the vector
    vector<int> v;
    v.push_back(7);
    v.push_back(6);
    
//we are making a copy of vector v as v2
    vector<int> v2 =v; //0(n)
    v2.push_back(3);
    printVec(v);
    printVec(v);
    printVec(v2);


}
