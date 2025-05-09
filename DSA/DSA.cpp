/* Ques 1 : Program to Check Whether a Number is a Positive or Negative Number. */


/* First Approach */

#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a number to check: ";
    cin >> num; // It expects an integer, but when we give a letter. then, the cin fails to perform the extraction.

    // cout << num << endl; // But, If the input fails, num might remain uninitialized (or default to 0 in some environments).
    // if (num != 0) { // So, num != 0 might evaluate as false and go to the else part.
    //     if (num > 0) {
    //         cout << num << " is a positive number." << endl;
    //     }
    //     else {
    //         cout << num << " is a negative number." << endl;
    //     }
    // }
    // else {
    //     cout << num << " is neither a positive nor a negative number." << endl; // This message is misleading in this case, because the user didn’t enter 0 — they entered an invalid input.
    // }


    /* A Better Approach for this by ChatGPT */

    if (cin.fail()) { // checks if input failed
        cout << "Invalid input! Please enter a numeric value." << endl;
    }
    else {
        if (num != 0) {
            if (num > 0) {
                cout << num << " is a positive number." << endl;
            }
            else if (num < 0) {
                cout << num << " is a negative number." << endl;
            }
        }
        else {
            cout << num << " is neither a positive nor a negative number." << endl;
        }
    }

    return 0;
}


/* Second Approach */

#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a number to check: ";
    cin >> num;

    if(num > 0){
        cout << num << " is a positive number." << endl;
    }else if(num < 0) {
        cout << num << " is a negative number." << endl;
    }else {
        cout << num << " is neither a positive nor a negative number." << endl;
    }

    return 0;
}



// ----------------------------------------------------------------------------------------------------------------------------------------------

/* Ques 2 : Program to Find the Greatest of the Three Numbers. */


/* First Approach */

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter three number with a space b/w them : ";
    cin >> num1 >> num2 >> num3;

    if (cin.fail()) {
        cout << "Invalid input! Please enter valid numeric values.";
    }
    else {
        if (num1 >= num2 && num1 >= num3) {
            cout << num1 << " is the greatest number." << endl;
        }
        else if (num2 >= num1 && num2 >= num3) {
            cout << num2 << " is the greatest number." << endl;
        }
        else {
            cout << num3 << " is the greatest number." << endl;
        }
    }

    return 0;
}








































#include <iostream>
using namespace std;
  
int main() {
    
    /* We use this method to take inputs from user */
    string str;
    cout << "Enter the name : ";
    cin >> str;
    cout << "first : " << str << endl;
    

    /* Or, We can use this to directly enter value without asking for input or without writing a prompt */
    cin >> str;
    cout << "second : " << str << endl;


// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------

    /* We have to firstly make (declare) multiple variables to store multiple values */

    int n, n1, n2;
    cout << "Enter three numbers : ";
    cin >> n >> n1 >> n2;
    
    cout << n << endl << n1 << endl << n2 << endl; 

    
    cout << "Enter three numbers : ";
    cin >> n >> n >> n;
    cout << n << endl << n << endl << n << endl; // it will give the same values because cin is actually used to just initialize the values to the variables.


// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------

    int num;
    cout << "Enter a number : ";
    cin >> num;

    /* Normally used syntax */
    if (num > 0) {
        cout << num << " is positive." << endl;
    }
    else if (num < 0) {
        cout  << num << " is negative." << endl;
    } 
    else {
        cout << num << " is neither a positive nor a negative number." << endl;
    }


    /* Orr can use this syntax */
    if (num > 0)
    cout << num << " is positive." << endl;
    else if (num < 0)
    cout << num << " is negative." << endl;
    else
    cout << num << " is neither a positive nor a negative number." << endl;


    /* ya ye */
    if (num > 0)
        cout << num << " is positive." << endl;
    else if (num < 0)
        cout << num << " is negative." << endl;
    else
        cout << num << " is neither a positive nor a negative number." << endl;

   return 0;
}