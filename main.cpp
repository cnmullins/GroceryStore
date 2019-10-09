//Author: Christian Mullins
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string addItem;
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
        getline(cin, addItem);
        if (numItems < 5)
        {
            list[numItems] = addItem;
            numItems++;
        }
        else
        {
            cout << "You'll need a bigger list!" << endl;
        }
     }
  }
  while (input != 'q');

  cout << "==ITEMS TO BUY==" << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << i + 1 << " " << list[i] << endl;
  }

  return 0;
}
