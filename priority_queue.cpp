#include <iostream>
#include <queue>

using namespace std;

int main(){
    
    //max heap -> always print first the greatest element
    priority_queue<int> maxi;

    //min heap -> always print first the smallest element
    priority_queue<int,vector<int> , greater<int> > mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(0);

    cout << "Size -> " << maxi.size() << endl;
    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout << maxi.top()<< " ";
        maxi.pop(); //clearing all the elements
    }cout << endl;

    mini.push(2);
    mini.push(5);
    mini.push(0);
    mini.push(6);
    mini.push(3);
    cout << "Size -> " << mini.size() << endl;
    int m = mini.size();
    for(int i=0;i<m;i++){
        cout << mini.top()<< " ";
        mini.pop();    //clearing all the elements
    }cout << endl;

    cout << "Khali hai ky bhai ?? -> " <<mini.empty() << endl;
}