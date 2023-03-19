#include <iostream>
using namespace std;

int main(){
    pair<int,string> p;
    p = {2,"abcd"};
    cout << p.first << " " << p.second << endl;

    //Copy the pair
    pair<int, string> &p1 = p;
    p1.first = 3;
    cout << p.first << " " << p.second << endl;
    
    cout << endl;

    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};

    for(int i = 0; i<3 ; i++){
        cout << p_array[i].first << " " << p_array[i].second << endl;

    }

    cout << endl;

    swap(p_array[0],p_array[2]);
    for(int i = 0; i<3 ; ++i){
        cout << p_array[i].first << " " << p_array[i].second << endl;

    }

    cout << endl;

    pair<int,int> sheel;
    cin >> sheel.first;
    cout << sheel.first;

    return 0;
}