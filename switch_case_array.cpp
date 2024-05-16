// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
// 	int num=2; 

// 	switch(num){
// 	case 1: cout<< "first"<<endl;
// 		break;
// 	case 2: cout<<"second"<<endl;
// 		break;
// 	default: cout<<" It is default case "<<endl;
// 	}

// 	cout<<endl; 
// }

/*new code */

#include <iostream>
#include <cstdlib> // Needed for exit() function

int main() {
    while (true) { // Infinite loop
        int choice;
        std::cout << "Enter a number (0 to exit): ";
        std::cin >> choice;

        switch (choice) {
            case 0:
                std::cout << "Exiting the program.\n";
                exit(0); // Terminate the program
            case 1:
                std::cout << "Option 1 selected.\n";
                break; // Break out of the switch case
            case 2:
                std::cout << "Option 2 selected.\n";
                break; // Break out of the switch case
            default:
                std::cout << "Invalid option.\n";
                break; // Break out of the switch case
        }
    }

    return 0; // This line will never be reached due to exit(0)
}
