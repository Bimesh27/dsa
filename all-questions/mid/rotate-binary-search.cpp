#include<iostream>
#include<vector>
using namespace std;

int rotatedBS(vector<int> arr, int s, int e, int target){
    if (s > e) {    
        return -1;  
    }   

    int m = s + (e - s) / 2;
    if(arr[m] == target) {
        return m;
    }

    if(arr[s] <= arr[m]) {
        if(target >= arr[s] && target < arr[m]) {
            return rotatedBS(arr, s, m-1, target);
        } else {
            return rotatedBS(arr, m+1, e, target);
        }
    } else {
        if(target < arr[m] && target <= arr[e]) {
            return rotatedBS(arr, m+1, e, target);
        } else {
            return rotatedBS(arr, s, m-1, target);
        }
    }
}

int main(){
    vector<int> arr = {4, 5, 7, 1,2};
    int target = 2;
    cout << rotatedBS(arr, 0, arr.size(), target) << endl;

    return 0;
}