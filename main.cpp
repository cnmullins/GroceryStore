//Author: Christian Mullins
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  do
  {
     cout<<"\n==GROCERY LIST MANAGER==";
     cout<<"\nEnter your choice: ";
     cout<<"\n (A)dd an item";
     cout<<"\n (Q)uit";
     cout<<"\nYour choice (A/Q): ";
     cin>>input;
     input = tolower(input);
     if (input == 'a')
     {
        cout << "What is the item?" << endl;
        cin.ignore();
        if (numItems < 5)
        {
            getline(cin, list[numItems]);
            numItems++;
        }
        else
        {
            cout << "You'll need a bigger list!" << endl;
        }
     }
  }
  while (input != 'q');

  return 0;
}
