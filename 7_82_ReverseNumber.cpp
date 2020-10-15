#include <iostream>

using namespace std ;

typedef int Dividen ;
typedef int Divisor ;
typedef int Quotient ;
typedef int Reminder ;



void DisplayReverseNum(int D)
{
    Divisor d = 1 ;
    Quotient q ;
    Reminder r ;


    while (d <= D)
    {
        q = D / d ;
        r = q % 10 ;        
        d = d * 10 ;       

        cout << r ;         
    }    
    cout << endl ;     
}     

int main()
{
    Dividen D ;
    cout << "Enter your Number : " << endl ;
    cin >> D ;

    DisplayReverseNum (D) ;
}