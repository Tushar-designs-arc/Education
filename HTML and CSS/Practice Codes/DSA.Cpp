/* Ques 1 : Program to Check Whether a Number is a Positive or Negative Number. */

/* First Approach */

// #include <iostream>
// using namespace std;

// int main() {

//     int num;
//     cout << "Enter a number to check: ";
//     cin >> num; // It expects an integer, but when we give a letter. then, the cin fails to perform the extraction.

//     // cout << num << endl; // But, If the input fails, num might remain uninitialized (or default to 0 in some environments).
//     // if (num != 0) { // So, num != 0 might evaluate as false and go to the else part.
//     //     if (num > 0) {
//     //         cout << num << " is a positive number." << endl;
//     //     }
//     //     else {
//     //         cout << num << " is a negative number." << endl;
//     //     }
//     // }
//     // else {
//     //     cout << num << " is neither a positive nor a negative number." << endl; // This message is misleading in this case, because the user didn’t enter 0 — they entered an invalid input.
//     // }


//     /* A Better Approach for this by ChatGPT */

//     if (cin.fail()) { // checks if input failed
//         cout << "Invalid input! Please enter a numeric value." << endl;
//     }
//     else {
//         if (num != 0) {
//             if (num > 0) {
//                 cout << num << " is a positive number." << endl;
//             }
//             else if (num < 0) {
//                 cout << num << " is a negative number." << endl;
//             }
//         }
//         else {
//             cout << num << " is neither a positive nor a negative number." << endl;
//         }
//     }

//     return 0;
// }


/* Second Approach */

// #include <iostream>
// using namespace std;

// int main() {

//     int num;
//     cout << "Enter a number to check: ";
//     cin >> num;

//     if(num > 0){
//         cout << num << " is a positive number." << endl;
//     }else if(num < 0) {
//         cout << num << " is a negative number." << endl;
//     }else {
//         cout << num << " is neither a positive nor a negative number." << endl;
//     }

//     return 0;
// }


// ----------------------------------------------------------------------------------------------------------------------------------------------