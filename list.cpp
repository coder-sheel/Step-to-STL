#include <iostream>
#include<list>

using namespace std;
//we cannot access the link directly
int main(){
    list<int> l;
    list<int> n(5,100);
    for(int i:n){
        cout << i<<" ";
    }cout<< endl;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout << i<<" ";

    }
    l.pop_back();
    cout<< endl;
    for(int i:l){
        cout << i<< " ";

    }

    l.push_back(1);
    cout<< endl;

    cout << "First element -> " << l.front() <<endl;
    cout << "Last element -> " << l.back() << endl;
    cout << "Empty or not -> " <<l.empty() << endl;
    cout << "Size Before erase -> "<< l.size() << endl;
    
    //We are erasing the first elemnt from the beginning

    l.erase(l.begin());

    cout << "Size After erase -> " << l.size() << endl;

}
