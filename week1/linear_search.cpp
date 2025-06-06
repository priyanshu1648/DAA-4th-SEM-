/*
Question: Linear Search
Given an array of nonnegative integers, design a linear algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case.

Input Format:
The first line contains number of test cases, T. For each test case, there will be three input lines. 
First line contains n (the size of array).
Second line contains n space-separated integers describing array.
Third line contains the key element that need to be searched in the array.

Output Format:
The output will have T number of lines.
For each test case, output will be "Present" if the key element is found in the array, otherwise "Not Present".
Also for each test case output the number of comparisons required to search the key.

Time Complexity: O(n)
Space Complexity: O(1).
*/

#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int key) {
    int comparisons = 0;
    bool found = false;
    
    for(int i = 0; i < n; i++) {
        comparisons++;
        if(arr[i] == key) {
            found = true;
            break;
        }
    }
    
    if(found) {
        cout << "Present " << comparisons << endl;
    } else {
        cout << "Not Present " << comparisons << endl;
    }
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int* arr = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int key;
        cin >> key;
        
        linearSearch(arr, n, key);
        
        delete[] arr;
    }
    
    return 0;
} 