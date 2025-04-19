// oop first porject(math and string)
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std ;
// math functions
void sum() ;
void sub() ;
void mul() ;
void div() ;
void mod() ;
// ----------------------------------------------------------
// struct 
struct math_process 
{
    // math-attributes

    int first_number ; 
    int second_number ;
    int math_choice ;

    // function 

    void sum()
    {
        cout << "-----------------------------" << endl;
        cout << "the result is " << first_number << " + " << second_number << " = " << first_number + second_number << endl;
        cout << "-----------------------------" << endl;
    }

    void sub()
    {
        cout << "-----------------------------" << endl;
        cout << "the result is " << first_number << " - " << second_number << " = " << first_number - second_number << endl;
        cout << "-----------------------------" << endl;
    }

    void mul()
    {
        cout << "-----------------------------" << endl;
        cout << "the result is " << first_number << " * " << second_number << " = " << first_number * second_number << endl;
        cout << "-----------------------------" << endl;
    }
    
    void div()
    {
        cout << "-----------------------------" << endl;
        cout << "the result is " << first_number << " / " << second_number << " = " << first_number / second_number << endl;
        cout << "-----------------------------" << endl;
    }
    
    void mod()
    {
        cout << "-----------------------------" << endl;
        cout << "the result is " << first_number << " % " << second_number << " = " << first_number % second_number << endl;
        cout << "-----------------------------" << endl;
    }
    
} ;
// ----------------------------------------------------------
// string functions
void add_string() ;
void compare_strings() ;
// ----------------------------------------------------------
// struct 
struct string_process 
{
    // string-attributes

    string first_word ;
    string second_word ;
    int string_choice ;

    // function 

    void add_string()
    {
        cout << "-----------------------------" << endl;
        cout << "the total text is " << first_word << " " << second_word << endl;
        cout << "-----------------------------" << endl;
    }
    void compare_strings()
    {
       if(first_word.length() != second_word.length())
       {
            cout << "the two strings are not the same length" << endl;
       }
       else
       {
            if(first_word == second_word)
            {
                cout <<"the two strings are the same" << endl;
            }
            else
            {
                cout <<"the two strings are not the same" << endl;
                cout << "-----------------------------" << endl;

                for(int i = 0 ; i <=first_word.length() ; i++)
                {
                    if(first_word[i] != second_word[i])
                    {
                        cout << "the " <<i+1 <<" character is different they are " << "( " << first_word[i] <<"!="<< second_word[i] << " ) " <<endl;
                        cout << "-----------------------------" << endl;
                    }
                }
            }
       }
    }
} ;

// ----------------------------------------------------------
// Function prototypes
void math_input(math_process &process) ;
void string_input(string_process &process) ;
// ----------------------------------------------------------

// main program

int main()
{
    math_process first_math_usage ;
    string_process first_string_usage ;

    int main_choice ;
    do
    {
        there : 

        cout << "Enter the mode you want : " << endl;
        cout << "1 - Math Process " << endl;
        cout << "2 - String Process " << endl;
        cout << "3 - Exit " << endl;

        cout << "-----------------------------" << endl;
        cin >> main_choice ;
        cout << "-----------------------------" << endl;

        switch(main_choice)
        {
            case 1 :
                math_input(first_math_usage) ;
                break ;

            case 2 :
                string_input(first_string_usage) ;
                break ;
            case 3 :
                break ;

            default :
                cout << "enter a valid number : " << endl; 
                goto there ;

        }
    }while(main_choice != 3) ;


    return 0 ;
}

void math_input(math_process &process)
{
    there :
    cout << "enter the first number : " ;
    cin >> process.first_number ;
    cout << "-----------------------------" << endl;
    
    cout << "enter the second number : " ;
    cin >> process.second_number ;
    cout << "-----------------------------" << endl;

    do
    {

        input_place :

        cout << "Enter the operation you want : " << endl;
        cout << "1 - Summation" << endl;
        cout << "2 - Subtraction" << endl;
        cout << "3 - Multipliction" << endl;
        cout << "4 - Division" << endl;
        cout << "5 - Modulus" << endl;
        cout << "6 - Enter new numbers" << endl;
        cout << "7 - Return to the main page" << endl;
        
        cin >> process.math_choice ;
        cout << "-----------------------------" << endl;
        // check for all cases ====> 7 cases ;
        switch(process.math_choice)
        {
            case 1 :
                process.sum() ;
                break ;
                
            case 2 :
                process.sub() ;
                break ;

            case 3 :
                process.mul() ;
                break ;

            case 4 :
                process.div() ;
                break ;

            case 5 :
                process.mod() ;
                break ;

            case 6 :
                goto there ;
                break ;

            case 7 :
            
                break ;

            default :
                cout << "enter a valid number : " << endl; 
                goto input_place ;

        }
    }while(process.math_choice != 7) ;

}

void string_input(string_process &process)
{
    there :
    cout << "enter the first word : ";
    cin >> process.first_word;
    cout << "-----------------------------" << endl;

    cout << "enter the second word : ";
    cin >> process.second_word;
    cout << "-----------------------------" << endl;


    do
    {

        input_place :

        cout << "Enter the operation you want : " << endl;
        cout << "1 - add two strings" << endl;
        cout << "2 - compare two strings" << endl;
        cout << "3 - Enter new strings" << endl;
        cout << "4 - Return to the main page" << endl;
        
        cin >> process.string_choice ;
        cout << "-----------------------------" << endl;
        // check for all cases ====> 7 cases ;
        switch(process.string_choice)
        {
            case 1 :
                process.add_string() ;
                break ;
                
            case 2 :
                process.compare_strings() ;
                break ;

            case 3 :
                goto there ;
                break ;

            case 4 :
                break ;

            default :
                cout << "enter a valid number : " << endl; 
                goto input_place ;

        }

    }while(process.string_choice != 4) ;
    

}