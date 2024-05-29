#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main()
{
   cout<<"\n-----------------Welcome to the Number Guessing Game-------------------\n";
   cout<<"\n----------You will have to guess a number between 1 to 100.------------\n";
   cout<<"\n------------------Lets start playing and Best of luck.------------------\n";
   srand(time(0));
   int rn=(rand()%100)+1;
    
    cout<<"\n*****You will have total 7 chance to guess the correct number.******";
    int chanceleft=7;
    int playerinput;

    for(int i=1;i<=7;i++)
    {
        cout<<"\n----------Enter the number---------\n";
        cin>>playerinput;
         
        if(playerinput==rn)
        {

            cout<<"\n\n!!Congrats!! .You have  sucessfully gucessed the right number.\n";
            cout<<"\nThanks for playing .Have a Nice Day\n";
            break;
        }
        else
        {
            if(playerinput>rn)
            {
                cout<<"\n****Insert the smaller Number. Try again****\n";

            }
            else
            {
                cout<<"\n****Insert the Largerr Number. Try again****\n";

            }
        }

        chanceleft--;
        cout<<"\nChance Left to guess the Random Number :"<<chanceleft<<"\n";
        
        if(chanceleft==0)
        {
            cout<<"\nSorry your chance has been finished to guess the random number. \n";
            cout<<"\nThe Random Number was :"<<rn<<"\n";
            cout<<"\nThanks for playing have a nice day.\n";
        }
    }
   cout<<"\n\n";
    return 0;
   

}