#include <iostream>
#include <vector>
using namespace std;
 

int findMinimum(const vector<int>& values) {
    int minValue = values[0];          // assume the first element is the minimum
    for (size_t i = 1; i < values.size(); i++) {
        if (values[i] < minValue) {    // found something smaller
            minValue = values[i];      // update the current minimum
        }
    }
    return minValue;
}
 
int main() {
    vector<int> values = {52, 9, 88, 3, 67, 24, 95, 11, 1, 6}; //Vector for values
 
    int result = findMinimum(values);
    cout << "Minimum value: " << result << endl;
 
    return 0;
}
 
