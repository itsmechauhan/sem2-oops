#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate memory for an integer
    int *ptr = new int;
    
    // Check if memory allocation is successful
    if (ptr == NULL) {
        cout << "Memory allocation failed!";
        return 1;
    }
    
    // Store a value in the dynamically allocated memory
    cout<<"Enter a value: ";
    cin>>*ptr;
    
    // Display the value
    cout << "Dynamically allocated value: " << *ptr << endl;
    
    // Deallocate the dynamically allocated memory
    delete ptr;

}
