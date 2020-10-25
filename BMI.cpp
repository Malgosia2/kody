/*
 * BMI.cpp
 * 
 * 
 */


#include <iostream>

using namespace std;
 
int main()
{
int waga, wzrost, BMI;

     cout <<"Wpisz wzrost: "<<endl;
    cin >> wzrost;
    
    cout << "Wpisz wagę: " << endl;
    cin >> waga;
 
    BMI = waga /( wzrost * wzrost );
 
    cout <<"Twoje BMI wynosi:"<<BMI<<endl;
 
    if (BMI<=18,5)
    {
        cout<<"Masz niedowage"<<endl;
    }
 
    if( BMI > 18.5 && BMI < 25 )
    {
        cout<<"Masz prawidlowe BMI" <<endl;
    }
    if (BMI >= 25 && BMI < 30)
    {
        cout<<"Masz nadwage"<<endl;
    }
    if (BMI >= 30 && BMI <= 50)
    {
        cout<<"Masz otyłość"<<endl;
    }
    return 0;
}


