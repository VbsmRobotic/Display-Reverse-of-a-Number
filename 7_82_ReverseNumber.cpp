#include <iostream>

using namespace std ;

typedef int Dividen ;
typedef int Divisor ;
typedef int Quotient ;
typedef int Reminder ;



int DisplayReverseNum(int D)
{
    Divisor d ;
    Quotient q ;
    Reminder r ;

    for (d = 1 ; d <= D ; d)
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