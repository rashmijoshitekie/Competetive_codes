# include <iostream>
# include <conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b;
    int n = 0;
    int coins[10], A[100][100];
    cout<<"\n Enter amount and no of coins type "<<endl;
    cin >> a >>b;
    for(int i=0; i<b; i++)
   { cin >> coins[i];
   }
    for(int i=0;i<b; i++)
    {
        for (int j = 0; j < a+1; j++)
        {
          if(j==0)
          {
              A[i][j] = 1;
          }   
         else if(i==0 && j!=0)
          {
             /* if(j<=coins[i])
               { if(coins[i]%j == 0)
                {
                    A[i][j] = 1;
                }
                else
                {
                     A[i][j] = 0;
                }
               }
               else*/
                if(j%coins[i] == 0)
                {
                    A[i][j] = 1;
                }
                else
                {
                     A[i][j] = 0;
                }
                      
          }
         else
         {
             if(coins[i]>j)
             {
                 A[i][j] = A[i-1][j];
             }
             else
             {
                 A[i][j] = A[i-1][j] + A[i][j-coins[i]];
             }
             
         }
          
        }
          
    }
     for(int i=0;i<b; i++)
    {  cout<< "\n";
        for (int j = 0; j < a+1; j++)
             cout<<A[i][j]<<" ";
    }
    cout<<A[b-1][a];
 return 0;
}
