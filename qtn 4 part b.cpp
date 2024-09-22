#include <iostream>
#include <cstring> 
using namespace std;

int main () {
    int a = 10; 
    int b = 3; 
    char email[20]; // Array to hold the email
					
					//part b (iii)
    
    strcpy(email, "iamme@gmail.com"); // Assign email
    cout << "The email is: " << email << endl; // Print email
					
					//PART B (IV)
    
    cout << "Enter your email: "; // Prompt user for input
    cin >> email; // Store input in email
    cout << "The entered email is: " << email << endl; // Print the email

    return 0;
}

