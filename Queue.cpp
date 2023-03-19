#include <iostream>
#include <queue>

using namespace std;

// First in, First out
int main(){
    
    queue<string> q;
    q.push("love");
    q.push("Sheel");    
    q.push("Ganvir");

    cout << "Size of stack -> " << q.size() << endl;

    cout << "front element -> " << q.front()<< endl;
    q.pop();
    cout << "front element -> " << q.front() << endl ;
    cout << "Size of stack -> " << q.size() << endl;
    
    
}