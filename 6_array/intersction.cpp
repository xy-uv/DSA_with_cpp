#include<iostream>
#include <bits/stdc++.h>
// #include<vector>

using namespace std;

// Helper function to print a vector
void printVector(const vector<int>& vec) {
    if (vec.empty()) {
        cout << "[]" << endl;
        return;
    }
    cout << "[ ";
    for(int val : vec) {
        cout << val << " ";
    }
    cout << "]" << endl;
}

/**
 * @brief Finds the intersection of two sorted integer vectors.
 * * This function uses a two-pointer approach, which is efficient for sorted arrays.
 * It assumes both input vectors are sorted in non-decreasing order.
 *
 * @param arr1 The first sorted vector.
 * @param n The size of the first vector.
 * @param arr2 The second sorted vector.
 * @param m The size of the second vector.
 * @return A vector<int> containing the common elements.
 */
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    int i = 0, j = 0;

    while(i < n && j < m) {
        if(arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
           
            i++;
        } else {
            j++;
        }
    }
    return ans;
}

int main() {

    // --- Test Case 1: Common elements exist ---
    cout << "## Test Case 1 ##" << endl;
    vector<int> list1 = {1, 2, 2, 3, 4, 5};
    vector<int> list2 = {2, 2, 4, 6};
    cout << "Vector 1: ";
    printVector(list1);
    cout << "Vector 2: ";
    printVector(list2);
    vector<int> intersection1 = findArrayIntersection(list1, list1.size(), list2, list2.size());
    cout << "Intersection: ";
    printVector(intersection1); // Expected output: [ 2 2 4 ]
    cout << "-----------------------------" << endl << endl;

    // --- Test Case 2: No common elements ---
    cout << "## Test Case 2 ##" << endl;
    vector<int> list3 = {10, 20, 30};
    vector<int> list4 = {40, 50, 60};
    cout << "Vector 1: ";
    printVector(list3);
    cout << "Vector 2: ";
    printVector(list4);
    vector<int> intersection2 = findArrayIntersection(list3, list3.size(), list4, list4.size());
    cout << "Intersection: ";
    printVector(intersection2); // Expected output: [] (empty)
    cout << "-----------------------------" << endl << endl;

    // --- Test Case 3: One vector is empty ---
    cout << "## Test Case 3 ##" << endl;
    vector<int> list5 = {1, 3, 5, 7, 9};
    vector<int> list6 = {};
    cout << "Vector 1: ";
    printVector(list5);
    cout << "Vector 2: ";
    printVector(list6);
    vector<int> intersection3 = findArrayIntersection(list5, list5.size(), list6, list6.size());
    cout << "Intersection: ";
    printVector(intersection3); // Expected output: [] (empty)
    cout << "-----------------------------" << endl << endl;
    
    // --- Test Case 4: Identical vectors ---
    cout << "## Test Case 4 (Bonus) ##" << endl;
    vector<int> list7 = {5, 10, 15};
    vector<int> list8 = {5, 10, 15};
    cout << "Vector 1: ";
    printVector(list7);
    cout << "Vector 2: ";
    printVector(list8);
    vector<int> intersection4 = findArrayIntersection(list7, list7.size(), list8, list8.size());
    cout << "Intersection: ";
    printVector(intersection4); // Expected output: [ 5 10 15 ]
    cout << "-----------------------------" << endl << endl;

    return 0;
}