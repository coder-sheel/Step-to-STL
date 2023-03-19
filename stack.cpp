#include <iostream>
#include <stack>

using namespace std;

//Stack : last in,first out

int main(){
    stack<string> s;

    s.push("love");
    s.push("Sheel");    
    s.push("Ganvir");

//Stack : last in,first out

    cout << "Top element -> " << s.top()<< endl;
    s.pop();
    cout << "Top element -> " << s.top() << endl ;
    cout << "Size of stack -> " << s.size() << endl;
    cout << "Empty or not " << s.empty() << endl;
   
}