#include <iostream>
#include <vector>
using namespace std;

//Define vector function such as to take input in it as per its size
// we are using reference to pass the actual value not the copied value
void printVec(vector<string> &v){
    cout << "size : " << v.size() <<endl;
    for(int i=0 ; i< v.size() ; i++){
        // v.size() -> 0(1)
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<string> v;
    int n;
    cin >> n;
    for(int i=0; i<n ; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    printVec(v);
}
