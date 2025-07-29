#include<iostream>
#include <vector>
#include <algorithm> // Required for sort, min, max
#include <string>    // Required for string in the helper function

// Using the standard namespace
using namespace std;

/**
 * @brief Finds all pairs of integers in an array that sum up to a given value.
 *
 * @param arr A vector of integers to search through.
 * @param s The target sum.
 * @return A vector of vectors, where each inner vector is a pair of numbers
 * that sums to 's'. The pairs are sorted, and the final list of
 * pairs is also sorted.
 *
 * Time Complexity: O(N^2), where N is the number of elements in the array,
 * due to the nested loops.
 * Space Complexity: O(K), where K is the number of pairs found, to store the result.
 */
vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;

   // Iterate through each element in the array
   for(int i = 0; i < arr.size(); i++){
       // Iterate through the subsequent elements
       for(int j = i + 1; j < arr.size(); j++){
           // Check if the pair sums to the target value 's'
           if(arr[i] + arr[j] == s){
               vector<int> temp;
               // Store the pair in sorted order (smaller element first)
               temp.push_back(min(arr[i], arr[j]));
               temp.push_back(max(arr[i], arr[j]));
               ans.push_back(temp);
           }
       }
   }
   // Sort the resulting list of pairs
   sort(ans.begin(), ans.end());
   return ans;
}

/**
 * @brief Helper function to print the results in a clean format.
 *
 * @param test_name A description of the test case.
 * @param result The vector of pairs to print.
 */
void printResult(const string& test_name, const vector<vector<int>>& result) {
    cout << "--- " << test_name << " ---" << endl;
    cout << "Result: { ";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "{" << result[i][0] << ", " << result[i][1] << "}";
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << " }" << endl << endl;
}


int main(){
    // Test Case 1: Simple case with unique positive integers
    vector<int> arr1 = {1, 2, 3, 4, 5};
    int s1 = 6;
    vector<vector<int>> result1 = pairSum(arr1, s1);
    printResult("Test Case 1: Simple Case", result1);

    // Test Case 2: Case with duplicate numbers
    vector<int> arr2 = {2, -3, 3, 3, 3};
    int s2 = 0;
    vector<vector<int>> result2 = pairSum(arr2, s2);
    printResult("Test Case 2: With Duplicates & Negatives", result2);

    // Test Case 3: Case where no pairs are found
    vector<int> arr3 = {10, 20, 30, 40};
    int s3 = 15;
    vector<vector<int>> result3 = pairSum(arr3, s3);
    printResult("Test Case 3: No Pairs Found", result3);

    // Test Case 4: Case with all elements being the same
    vector<int> arr4 = {5, 5, 5, 5};
    int s4 = 10;
    vector<vector<int>> result4 = pairSum(arr4, s4);
    printResult("Test Case 4: Identical Elements", result4);

    // Test Case 5: Case with an empty input array
    vector<int> arr5 = {};
    int s5 = 100;
    vector<vector<int>> result5 = pairSum(arr5, s5);
    printResult("Test Case 5: Empty Array", result5);

    return 0;
}