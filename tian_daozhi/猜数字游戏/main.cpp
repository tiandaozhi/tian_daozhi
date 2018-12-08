#include <iostream>

using namespace std;
void Charge();

int main()
{
    Charge();
    return 0;
}
void Charge()
{


    int a;
    int b=1000;
    cout<<"I have a number between 1 and 1000"<<endl;
    cout<<"Can you guess my number?"<<endl;
    cout<<"Please type your first guess."<<endl;
    cin>>a;

  while(a!=b)
  {
      if(a>b)
    {
        cout<<"Too high.Try again"<<endl;
        cin>>a;
    }

    else if(a<b)
        {
        cout<<"Too low.Try again"<<endl;
        cin>>a;
    }
  }
    if(a=b)
    {
        cout<<"Excellent! You guess the number!"<<endl;
        cout<<"Would you like to play again(y or n)?"<<endl;

    }
}


