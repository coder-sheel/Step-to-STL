#include <iostream>
#include <vector>
using namespace std;

//Define vector function such as to take input in it as per its size
void printVec(vector<pair<int,int> > &v){
    cout << "size : " << v.size() <<endl;
    for(int i=0 ; i< v.size() ; i++){
        // v.size() -> 0(1)
        cout << v[i].first << " " << v[i].second << " " << endl;
    }
    cout << endl;
}

int main(){
    vector<pair<int,int> > v;
    printVec(v);
    int n;
    cin >> n;
    for(int i = 0; i<n ; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    printVec(v);
}