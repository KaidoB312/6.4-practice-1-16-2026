/*
Name: DeepSeek AI Assistant
Date Written: November 7, 2023
Date Last Modified: November 7, 2023
Description: A program that demonstrates finding the largest number among
             sets of 2 to 10 integers using separate functions for each case.
Academic Integrity Statement: This code represents my original work completed
                             as an AI assistant for educational purposes.
*/

#include <iostream>
using namespace std;

// Function prototypes
int largestOfTwo( int a, int b );
int largestOfThree( int a, int b, int c );
int largestOfFour( int a, int b, int c, int d );
int largestOfFive( int a, int b, int c, int d, int e );
int largestOfSix( int a, int b, int c, int d, int e, int f );
int largestOfSeven( int a, int b, int c, int d, int e, int f, int g );
int largestOfEight( int a, int b, int c, int d, int e, int f, int g, int h );
int largestOfNine( int a, int b, int c, int d, int e, int f, int g, int h,
                   int i );
int largestOfTen( int a, int b, int c, int d, int e, int f, int g, int h,
                  int i, int j );


int main()
{
    // Test largestOfTwo
    cout << "Testing largestOfTwo(5, 10): " << largestOfTwo(5, 10) << endl;
    cout << "Testing largestOfTwo(15, 3): " << largestOfTwo(15, 3) << endl;
    cout << "Testing largestOfTwo(7, 7): " << largestOfTwo(7, 7) << endl;
    
    // Test largestOfThree
    cout << "\nTesting largestOfThree(5, 10, 3): " 
         << largestOfThree(5, 10, 3) << endl;
    cout << "Testing largestOfThree(1, 2, 3): " 
         << largestOfThree(1, 2, 3) << endl;
    cout << "Testing largestOfThree(8, 8, 8): " 
         << largestOfThree(8, 8, 8) << endl;
    
    // Test largestOfFour
    cout << "\nTesting largestOfFour(1, 2, 3, 4): " 
         << largestOfFour(1, 2, 3, 4) << endl;
    cout << "Testing largestOfFour(10, 5, 3, 8): " 
         << largestOfFour(10, 5, 3, 8) << endl;
    
    // Test largestOfFive
    cout << "\nTesting largestOfFive(1, 20, 3, 4, 5): " 
         << largestOfFive(1, 20, 3, 4, 5) << endl;
    
    // Test largestOfSix
    cout << "\nTesting largestOfSix(1, 2, 30, 4, 5, 6): " 
         << largestOfSix(1, 2, 30, 4, 5, 6) << endl;
    
    // Test largestOfSeven
    cout << "\nTesting largestOfSeven(1, 2, 3, 40, 5, 6, 7): " 
         << largestOfSeven(1, 2, 3, 40, 5, 6, 7) << endl;
    
    // Test largestOfEight
    cout << "\nTesting largestOfEight(1, 2, 3, 4, 50, 6, 7, 8): " 
         << largestOfEight(1, 2, 3, 4, 50, 6, 7, 8) << endl;
    
    // Test largestOfNine
    cout << "\nTesting largestOfNine(1, 2, 3, 4, 5, 60, 7, 8, 9): " 
         << largestOfNine(1, 2, 3, 4, 5, 60, 7, 8, 9) << endl;
    
    // Test largestOfTen
    cout << "\nTesting largestOfTen(1, 2, 3, 4, 5, 6, 70, 8, 9, 10): " 
         << largestOfTen(1, 2, 3, 4, 5, 6, 70, 8, 9, 10) << endl;
    
    // Additional edge case tests
    cout << "\n--- Additional Edge Case Tests ---" << endl;
    cout << "All same numbers (largestOfFour): " 
         << largestOfFour(5, 5, 5, 5) << endl;
    cout << "Negative numbers (largestOfThree): " 
         << largestOfThree(-5, -1, -10) << endl;
    cout << "Mixed positive/negative (largestOfFive): " 
         << largestOfFive(-10, 0, 5, -3, 2) << endl;
    
    return 0;
}


// Function implementations

int largestOfTwo( int a, int b )
{
    if ( a > b )
    {
        return a;
    }
    return b;
}


int largestOfThree( int a, int b, int c )
{
    int largest = a;
    
    if ( b > largest )
    {
        largest = b;
    }
    
    if ( c > largest )
    {
        largest = c;
    }
    
    return largest;
}


int largestOfFour( int a, int b, int c, int d )
{
    int largest = a;
    
    if ( b > largest )
    {
        largest = b;
    }
    
    if ( c > largest )
    {
        largest = c;
    }
    
    if ( d > largest )
    {
        largest = d;
    }
    
    return largest;
}


int largestOfFive( int a, int b, int c, int d, int e )
{
    int largest = a;
    
    if ( b > largest )
    {
        largest = b;
    }
    
    if ( c > largest )
    {
        largest = c;
    }
    
    if ( d > largest )
    {
        largest = d;
    }
    
    if ( e > largest )
    {
        largest = e;
    }
    
    return largest;
}


int largestOfSix( int a, int b, int c, int d, int e, int f )
{
    int largest = a;
    
    if ( b > largest )
    {
        largest = b;
    }
    
    if ( c > largest )
    {
        largest = c;
    }
    
    if ( d > largest )
    {
        largest = d;
    }
    
    if ( e > largest )
    {
        largest = e;
    }
    
    if ( f > largest )
    {
        largest = f;
    }
    
    return largest;
}


int largestOfSeven( int a, int b, int c, int d, int e, int f, int g )
{
    int largest = a;
    
    if ( b > largest )
    {
        largest = b;
    }
    
    if ( c > largest )
    {
        largest = c;
    }
    
    if ( d > largest )
    {
        largest = d;
    }
    
    if ( e > largest )
    {
        largest = e;
    }
    
    if ( f > largest )
    {
        largest = f;
    }
    
    if ( g > largest )
    {
        largest = g;
    }
    
    return largest;
}


int largestOfEight( int a, int b, int c, int d, int e, int f, int g, int h )
{
    int largest = a;
    
    if ( b > largest )
    {
        largest = b;
    }
    
    if ( c > largest )
    {
        largest = c;
    }
    
    if ( d > largest )
    {
        largest = d;
    }
    
    if ( e > largest )
    {
        largest = e;
    }
    
    if ( f > largest )
    {
        largest = f;
    }
    
    if ( g > largest )
    {
        largest = g;
    }
    
    if ( h > largest )
    {
        largest = h;
    }
    
    return largest;
}


int largestOfNine( int a, int b, int c, int d, int e, int f, int g, int h,
                   int i )
{
    int largest = a;
    
    if ( b > largest )
    {
        largest = b;
    }
    
    if ( c > largest )
    {
        largest = c;
    }
    
    if ( d > largest )
    {
        largest = d;
    }
    
    if ( e > largest )
    {
        largest = e;
    }
    
    if ( f > largest )
    {
        largest = f;
    }
    
    if ( g > largest )
    {
        largest = g;
    }
    
    if ( h > largest )
    {
        largest = h;
    }
    
    if ( i > largest )
    {
        largest = i;
    }
    
    return largest;
}


int largestOfTen( int a, int b, int c, int d, int e, int f, int g, int h,
                  int i, int j )
{
    int largest = a;
    
    if ( b > largest )
    {
        largest = b;
    }
    
    if ( c > largest )
    {
        largest = c;
    }
    
    if ( d > largest )
    {
        largest = d;
    }
    
    if ( e > largest )
    {
        largest = e;
    }
    
    if ( f > largest )
    {
        largest = f;
    }
    
    if ( g > largest )
    {
        largest = g;
    }
    
    if ( h > largest )
    {
        largest = h;
    }
    
    if ( i > largest )
    {
        largest = i;
    }
    
    if ( j > largest )
    {
        largest = j;
    }
    
    return largest;
}
