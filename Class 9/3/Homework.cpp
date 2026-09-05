// library includes
// include <library name>
#include<iostream>
// # shows that this is a special instruction
// include tells the program to include the specific library
// < > show which library is being included
// iostream gives the program tools for input and output

// specific objects from library
using std::cout;
// using lets the program know what tool to use
// std is where standard C++ tools are kept
// :: shows where the specific tool comes from
// cout is the tool used to display output
// ; shows the instruction is complete acts as a period

// entrypoint
int main() {
    cout << "hello world";
    return 0;
}

// int means the function will return a whole number
// main is where the program starts
// () is where information can be given to the function
// { } is where the instructions for main begin and end
// return 0 tells the program to end and return a value of 0 if successful
// " " shows that what is inside is text

// Breaking down #include<iostream>

// # lets the program know that this is a special instruction
// include tells the program to include a specific library
// < shows where the library name begins
// iostream is the name of the library being included
// iostream gives the program tools for input and output
// > shows where the library name ends
// together, #include<iostream> gives the program access to the iostrean library

// Breaking down using std::cout;

// using lets the program know what tool to use
// std is where standard C++ tools are kept
// : and : together make :: which connects std to the specific tool I want from it
// cout is the tool used to display output
// ; shows the instruction is complete acts as a period
// this allows me to use cout by itself without having to type std::cout every time I want to use it

// breaking down int main() {

// int means integer, a whole number
// int tells the program that the function will return a whole number
// main is the name of the function where the program starts
// () is where information can be given to the function
// { is where the instructions for main begin

// breaking down cout << "hello world";

// cout is the tool used to display output
// << is the insertion operator, it tells the program to send what comes after it to cout
// "hello world" is the text that will be displayed
// ; shows the instruction is complete acts as a period
// when the line runs, cout displays hello world

// Breaking down return 0;

// return tells the function to end and return a value
// 0 is the value being returned
// 0 normally means that the program ended successfully
// the 0 does not actually get displayed
// ; shows the instruction is complete acts as a period

// Breaking down }

// } is where the instructions for main end 