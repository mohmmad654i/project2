#include <iostream>
using namespace std;
int main (){
float x;
float penny ;
 float nickel ;

 float dime;
 float quarter ;
 float dollar ;
 cin>>penny;
 cin>>nickel;
 cin>>dime;
 cin>>quarter;
 cin>>dollar;
  cin>>x;

 penny = (1*penny )+(5 * nickel)+(dime*10)+(25*quarter)+(100*dollar);


cout<<"Penny :"<<penny<<endl;

dollar = (penny/100);

cout<<"dollar :"<<dollar<<endl;



















        system("pause");

        return 0;
}
