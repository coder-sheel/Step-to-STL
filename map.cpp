#include <iostream>
#include <map>
using namespace std;

//data value stores in the form of key
// one key will point only one value
// many values can point one key
// it is sorted -> print in sorted order

int main(){
    map<int,string> m;
    m[1] = "Sheel";
    m[15] ="Coding";
    m[3] ="Loves";

    //another way to insert 

    m.insert({19,"C++"});

    cout << "Before erase " << endl;
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }cout<< endl;

    cout << "Finding -13 -> " << m.count(-13) << endl;
    
    m.erase(15);
    cout << "After erase " << endl;
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }cout<< endl;
}