#include <iostream>
#include <string>
  //yes this saves typing, but there reasons not to use it.. search SO!
using namespace std;

  //this one avoids you having to copy/paste the similar parts
void DoIt( const MathOperation& op, const std::string& opName, const std::string& verb, const std::string& resultName )
{
  cout << "You have chosen " << opName << "!" << endl;

  cout<<"Enter the first number you want to " << verb << ": "<< endl;

    //here you should actually check if the user really types in a number, and not    "blablabla"
    //and off course, put it in a seperate function so you can reuse it for num2
  float num1;
  cin>>num1;

  float num2;
  cout<<"Enter the second number you wat to " << verb << ": "<< endl;
  cin>>num2;

  cout<<"The " << resultName << " is " << op.doit( num1, num2 ) <<endl;
}

int main()
{
int op;
char cont = 'n';

do {
  cout<<"Welcome to C++ Calculator v2!"<<endl;
  cout<<"Select the number for which operation you want to use: "<<endl;
  cout<<"1-Addition"<<endl;
  cout<<"2-Subtraction"<<endl;
  cout<<"3-Mutliplication"<<endl;
  cout<<"4-Division"<<endl;
  cin>>op;

    //see how much shorter this is?
  if( op == 1 )
    DoIt( Addition(), "Addition", "add", "sum" );
  else if (op==2)
    DoIt( Subtraction(), "Subtraction", "subtract", "difference" );
  else
    cout << "Sorry I don't know this number" << endl;

  cout<<"Do you wish to continue? Y/N"<<endl;
  cin>>cont;

} while (cont=='Y'||cont=='y');

cout<<"Thanks for using my program, goodbye!"<<endl;
return 0;
}