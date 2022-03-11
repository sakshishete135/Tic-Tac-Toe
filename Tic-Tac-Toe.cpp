#include<iostream>
#include<random>
using namespace std;
char a11='1',a12='2',a13='3',a21='4',a22='5',a23='6',a31='7',a32='8',a33='9',c,x,o;
int loc,loc1;
char turn = 'X';

int person1(int loc);
int person2(int loc1);
void display();
void choice();
void player_turn();
bool game_over();

int main()
{
display();
cout<<"\t Choose X or O: ";
cin>>c;
choice();
while(!game_over())
{
  player_turn();
  display();
}
return 0;
}

void display()
  {
      system("cls");
      cout<<"\n\tTIC TAC TOE!!\n"<<endl;
      cout<<"\t     |     |     "<<endl;
      cout<<"\t  "<<a11;cout<<"  |";cout<<"  "<<a12;cout<<"  |";cout<<"  "<<a13;cout<<"   "<<endl;
      cout<<"\t_____|_____|_____"<<endl;
      cout<<"\t     |     |     "<<endl;
      cout<<"\t  "<<a21;cout<<"  |";cout<<"  "<<a22;cout<<"  |";cout<<"  "<<a23;cout<<"   "<<endl;
      cout<<"\t_____|_____|_____"<<endl;
      cout<<"\t     |     |     "<<endl;
      cout<<"\t  "<<a31;cout<<"  |";cout<<"  "<<a32;cout<<"  |";cout<<"  "<<a33;cout<<"   "<<endl;
      cout<<"\t     |     |     "<<endl;
  }
  
  void choice()
  {
  	if(c=='X'||c=='x')
    {
    x = c;
    o = 'O';
    }
    else if(c=='O'||c=='o')
    {
    o = 'X';
    x = c;
    }  
   }

int person1(int loc)
{
   cout<<"\t Choose location Player 1: ";
   cin>>loc;
  switch(loc)
 {
     case 1:
     {
         a11=x;
         break;
     }
     case 3:
     {
         a13=x;
         break;
     }
     case 5:
     {
         a22=x;
         break;
     }
     case 7:
     {
         a31=x;
         break;
     }
     case 9:
     {
         a33=x;
         break;
     }
     case 2:
     {
         a12=x;
         break;
     }
     case 4:
     {
         a21=x;
         break;
     }
     case 6:
     {
         a23=x;
         break;
     }
     case 8:
     {
         a32=x;
         break;
     }

 }
 return 0;
}

int person2(int loc1)
{
   cout<<"\t Choose location Player 2: ";
   cin>>loc1;
  switch(loc1)
  {
      case 1:
     {
         a11=o;
         break;
     }
     case 3:
     {
         a13=o;
         break;
     }
     case 5:
     {
         a22=o;
         break;
     }
     case 7:
     {
         a31=o;
         break;
     }
     case 9:
     {
         a33=o;
         break;
     }
     case 2:
     {
         a12=o;
         break;
     }
     case 4:
     {
         a21=o;
         break;
     }
     case 6:
     {
         a23=o;
         break;
     }
     case 8:
     {
         a32=o;
         break;
     }
  }
  return 0;
}

void player_turn()
{
  if(turn=='X')
  {
      person1(loc);
      turn = 'O';
  }
  else if(turn=='O')
  {
      person2(loc1);
      turn = 'X';
  }
}

bool game_over()
{
    if((a11==x&&a12==x&&a13==x)||(a21==x&&a22==x&&a23==x)||(a31==x&&a32==x&&a33==x)||(a11==x&&a21==x&&a31==x)||(a12==x&&a22==x&&a32==x)||(a13==x&&a23==x&&a33==x)||(a11==x&&a22==x&&a33==x)||(a13==x&&a22==x&&a31==x))
    {
       cout<<"\t PLAYER 1 WINS!! \n";
       return true;
    }
    else if((a11==o&&a12==o&&a13==o)||(a21==o&&a22==o&&a23==o)||(a31==o&&a32==o&&a33==o)||(a11==o&&a21==o&&a31==o)||(a12==o&&a22==o&&a32==o)||(a13==o&&a23==o&&a33==o)||(a11==o&&a22==o&&a33==o)||(a13==o&&a22==o&&a31==o))
    {
       cout<<("\t PLAYER 2 WINS!! \n");
       return true;
    }
    else if((a11==o||a11==x)&&(a12==o||a12==x)&&(a13==o||a13==x)&&(a21==o||a21==x)&&(a22==o||a22==x)&&(a23==o||a23==x)&&(a31==o||a31==x)&&(a32==o||a32==x)&&(a33==o||a33==x))
    {
        cout<<"\t DRAW!! \n";
        return true;
    }
    return false;
}
