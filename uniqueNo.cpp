#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int>vec = {1,2,2,1,4,5,6,6,5};
    int ans =0;
    for(int val : vec){
        ans ^= val;
    }
    cout<< ans << endl;
    return 0;
}