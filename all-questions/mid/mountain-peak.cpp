#include<iostream>
#include<vector>
using namespace std;

int peakIndex(vector<int> arr, int s, int e){
    if(s == e) {
        return s;
    }

    int m = s + (e - s) / 2;
    if(m > 0 && m < arr.size()-1 && arr[m-1] < arr[m] && arr[m] > arr[m+1]) {
        return m;
    }

    if(arr[m] > arr[m-1]) {
        return peakIndex(arr, m+1, e);
    } else {
        return peakIndex(arr, s, m);
    }

}

int main(){
    vector<int> arr = {4, 5, 8, 9, 7, 1};
    cout << peakIndex(arr, 0, arr.size()-1);

    return 0;
}