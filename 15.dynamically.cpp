#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate memory for an integer
    int *ptr = new int;
    
    // Check if memory allocation is successful
    if (ptr == nullptr) {
        cout << "Memory allocation failed!";
        return 1;
    }
    
    // Store a value in the dynamically allocated memory
    *ptr = 10;
    
    // Display the value
    cout << "Dynamically allocated value: " << *ptr << endl;
    
    // Deallocate the dynamically allocated memory
    delete ptr;
    
    // Check if deallocation is successful
    if (ptr != nullptr) {
        cout << "Memory deallocation failed!";
        return 1;
    }
    
    cout << "Memory deallocated successfully!";
    
    return 0;
}
