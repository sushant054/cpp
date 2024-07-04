#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     //taking input 
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
    //actual elements
       cin >> arr[arr_i];
    }
    //printing array 
    for(int arr_i = n-1;arr_i >= 0;arr_i--){
       cout <<  arr[arr_i] << " ";
    }
    cout << endl;
    return 0;
}
