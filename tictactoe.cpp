#include<iostream>
using namespace std;
 char  a[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
 char p1, p2, n, p ;
 bool tie;
 int row, col, check=0, ent ;
void board()
{

    cout<<" "<<a[0][0]<<" | "<<a[0][1]<<" | "<<a[0][2]<<" \n";
    cout<<"___|___|___\n";
    cout<<" "<<a[1][0]<<" | "<<a[1][1]<<" | "<<a[1][2]<<" \n";
    cout<<"___|___|___\n";
    cout<<" "<<a[2][0]<<" | "<<a[2][1]<<" | "<<a[2][2]<<" \n";
}
void  checking()
{
    for(int i=0; i<3;i++)
  {
     if((a[i][0] == a[i][1] && a[i][0] == a[i][2])||(a[0][i] ==a[1][i] && a[0][i] == a[2][i]) )
      {check= 1 ;
      break;
      }
      else if (a[0][0] == a[1][1] && a[0][0] == a[2][2] || a[0][2] == a[1][1] && a[0][2] == a[2][0])
        {check= 1 ;
      break;
      }


      else
      {

       check = 0 ;
      }

  }
}
bool check_tie()
{
   for(int i = 0; i<3 ; i++ )
   {
       for(int j =0; j<3 ; j++ )
       {
           if (a[i][j] !='0' && a[i][j] != 'X' )
           if (a[i][j] !='0' && a[i][j] != 'X' )
           {
               return true; }
       }
   }

  return false;
}
void enter()
{
  switch(n){
      case '1' : row=0; col=0;
                break;
    case '2' : row=0; col=1;
                break;
      case '3' : row=0; col=2;
                break;
        case '4' : row=1; col=0;
                break;
      case '5' : row=1; col=1;
                break;
      case '6' : row=1; col=2;
                break;
       case '7' : row=2; col=0;
                break;
    case '8' : row=2; col=1;
                break;
      case '9' : row=2; col=2;
                break;
        default: cout<<"Invalid Move";
    }
    if(a[row][col]=='X'|| a[row][col]=='0')
    {
        ent=0;
    }
    else
  {
       a[row][col]=p;
    ent= 1 ;
  }
}

int main()
{
    cout<<" TIC TAC TOE!\n\n";
    board();
    cout<<" player 1 choose: \n1.X\n2.0\n";
    cin>>p1;
    if(p1=='X')
        p2='0';
    else
        p2='X';
checking();

while(check== 0 )
{

    cout<<"player 1 enter position: ";
    p= p1 ;
    cin>>n;
    enter();
    while(ent==0)
    {
        cout<<"position not empty, choose another empty position: ";
        cin>>n;
        enter() ;
    }
    board();

    checking();
    if (check==1 )
    {
        cout<<"WINNER IS PLAYER 1";
        break;
    }
    else{
tie=check_tie();
    if(tie== false )
    {
        cout<<"DRAW!";
        break;
    }
}
    cout<<"player 2 enter: ";
    cin>>n;
    p=p2;
    enter();
     while(ent==0)
    {
        cout<<"position not empty, choose another empty position: ";
        cin>>n;
        enter();
    }
    board();
    checking();
    if (check== 1)
    {
        cout<<"WINNER IS PLAYER 2";
        break;
    }
else {
    tie=check_tie();
    if(tie== false )
    {
        cout<<"DRAW!";
        break;
    }

}
}
}
