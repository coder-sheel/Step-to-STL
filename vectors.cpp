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
//Putting the values in the vector 
    vector<int> v;
    int n;
    cin >> n;
    for(int i =0 ; i<n ; i++){
        int x;
        cin >> x;
        v.push_back(x); //add the value in the last place of the vector
    }
    printVec(v);
}