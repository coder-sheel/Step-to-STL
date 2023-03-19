#include <iostream>
#include <vector>
using namespace std;

//Define vector function such as to take input in it as per its size
void printVec(vector<int> v){
    cout << "size : " << v.size() <<endl;
    for(int i=0 ; i< v.size() ; i++){
        // v.size() -> 0(1)
        cout << v[i] << " ";
    }

}

int main(){
// declaring the size of vector
    vector<int> v(10);
    v.push_back(7);
    printVec(v); 
}

