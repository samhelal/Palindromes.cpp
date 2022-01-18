/*17. 4.27 (Palindromes) A palindrome is a number or a text phrase
that reads the same backward as forward. For example, each
of the following five-digit integers is a palindrome: 12321,
55555, 45554 and 11611. Write a program that reads in a five-
digit integer and determines whether it’s a palindrome. [Hint:
Use the division and remainder operators to separate the
number into its individual digits.]*/

#include <iostream>
using namespace std ;

int main(){
    int number(0);

    cout << "\nEnter number :" ;
    cin >> number ;


    if(number/10000 == number%10 ){
        if((number%100)/10 == (number/1000)%10 ){
            cout << "This number is palindrome\n" << endl ;
        }

    }
    else{
        cout << "Try an other number \n" << endl ;
    }
}
