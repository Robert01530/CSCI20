/*
functions in C++;
P: Make a euclidean distance function in 2D, Pythag theorem
    a^2 + b^2 + c^2,
Q:
1. What is euclidean distance? 
    shortest distance between two points in any space.
2. What is meant by 2D?
    2 demensional space - 2 axis of measure
3. Are units required?
    NO
4. What is a function?
    ?????
5. What is distance?
    measureable space
6. Who is euclid?
    Math God
7. Why are we doing this?
    to learn what a function is in c++
8. What is pythag?
    short for pythagorous, who was a arithmetician
9. In the equation given, what does it mean?
    a^2 + b^2 = c^2 right triangle, solving for hyp.
10. What a & b & c?
    Integers

    p': We need to create a function that acts on two points of a two dimensional graph where 
    the function finds the distance between these two points, the graph will measure in integar
    labeled axis. The distance will be calc using uclidean distance (2d), pythag. To convert 
    points to distance calc values we usew the standard method.

    standard method : (x,y) (x',y') a + |x' - x|, b = |y' - y|

Q: how might we deal with converting points to distance calc values?
    1. arithmetic
    2. group values (arrays) 
    3. can use functions
*/
#include<iostream>
#include<cmath>

using std::cout;
using std::endl;
using std::abs;
using std::sqrt;

int prac() {
    return 40;
}

int prac_inputs(int n, int m) {
    int r = n*n+ m*m;
    return r;
}

int a_inputs(int g[2], int e[2]) {
    return e[1];
}

int A(int x[2], int z[2]) {
    return abs(x[0] - z[0]);
}

int main() { 
    int p1[2] = {1, 2};
    int p2[2] = {4, 3};

    // practice variables
    // int x = 20;
    // int k = 1;


    cout << p1 [0] << endl;
    cout << prac_inputs(p1[0], p2[0]) << endl;
    cout << a_inputs(p1, p2) << endl;
    cout << A(p1, p2) << endl;
    
    return 0;
}