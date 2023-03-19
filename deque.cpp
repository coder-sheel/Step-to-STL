#include <iostream>
#include<deque>

using namespace std;

// In vector we can add or remove a element from back only 
// But in Deque we can add or remove a element from both front and back

int main(){
    
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout << i<<" ";

    }
    d.pop_back();
    cout<< endl;
    for(int i:d){
        cout << i<< " ";

    }

    d.push_back(1);
    cout<< endl;

    cout << "First index elemnt -> " << d.at(1) << endl;
    cout << "First element -> " << d.front() <<endl;
    cout << "Last element -> " << d.back() << endl;
    cout << "Empty or not -> " <<d.empty() << endl;
    cout << "Size Before erase -> "<< d.size() << endl;
    
    //We are erasing the first elemnt from the beginning

    d.erase(d.begin(),d.begin()+1);

    cout << "Size After erase -> " << d.size() << endl;

    for(int i:d){
        cout << i<<" ";
    }

}