#include<iostream>
#include<climits>
using namespace std;

int main() {
    int maxSum = INT_MIN;
    int arr[7]={3,-4,5,4,-1,7,-8};
    
    for(int st =0; st<7 ; st++){
        int currSum =0;
        for(int end =st ; end<7 ; end++){
            currSum += arr[end];
            maxSum = max(currSum,maxSum);
        }
    }
    cout << "maximum subarray sum is : " << maxSum << "\n";

    return 0;
}