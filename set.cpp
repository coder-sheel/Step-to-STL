#include <iostream>
#include <set>
using namespace std;

//it stores the unique elemnts;
//no modification only fill and pop
// output comes in a sorted order

int main(){
    
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(2);
    s.insert(0);
    s.insert(0);

    for(auto i:s){
        cout << i << " ";
    }cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    

    for(auto i:s){
        cout << i << " ";
    }cout << endl;

    s.erase(s.begin());
    for(auto i:s){
        cout << i << " ";
    }cout << endl;

    cout <<"5 is present or not -> " << s.count(5)<< endl;
    cout <<"-5 is present or not -> " << s.count(-5)<< endl;

    set<int>::iterator itr = s.find(5);

    for(auto it=itr;it!=s.end();it++){
        cout << *it << " ";
    }cout<< endl;
}