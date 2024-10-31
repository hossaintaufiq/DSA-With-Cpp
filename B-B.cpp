#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check if a given `k` value is feasible
bool is_feasible(const vector<long long>& cells, int n, long long k) {
    for (int i = 1; i < n; i++) {
        if (cells[i] - cells[i - 1] > 2 * k) {
            return false;  // If the gap between cells is greater than 2*k, it's not feasible
        }
    }
    return true;  // All gaps are feasible
}

// Function to find the minimum `k` for which all cells in the list can be painted
long long min_k_to_paint_black(int n, const vector<long long>& cells) {
    long long left = 0, right = cells[n - 1] - cells[0];  // Set bounds for binary search

    // Binary search to find the minimum feasible `k`
    while (left < right) {
        long long mid = left + (right - left) / 2;  // Middle point
        if (is_feasible(cells, n, mid)) {
            right = mid;  // If feasible, search for smaller `k`
        } else {
            left = mid + 1;  // If not feasible, search for larger `k`
        }
    }
    return left;  // Return the smallest feasible `k`
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    vector<long long> results(t);  // Store results for each test case

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;  // Number of cells in the current test case
        vector<long long> cells(n);  // Store the cell positions
        
        for (int j = 0; j < n; j++) {
            cin >> cells[j];  // Input the cell positions
        }
        
        results[i] = min_k_to_paint_black(n, cells);  // Compute minimum `k` for this test case
    }

    // Output results for each test case
    for (long long result : results) {
        cout << result << endl;
    }

    return 0;
}
