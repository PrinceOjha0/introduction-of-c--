/*
Number Pattern 2
Send Feedback
Print the following pattern
Pattern for N = 4


The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input :
5
Sample Output :


The dots represent spaces.



*/



#include<iostream>

using namespace std;

int main(){

  int n,y;

    cin>>n;

    

    for(int i=1;i<=n;i++)

    {

        y=i-1;

        for(int j=0;j<n;j++)

        {

            

            if(j>=n-i)

            {

                y++;

                cout<<y;

            }

            else

            {

                cout<<" ";

            }

        }

        cout<<endl;

    }

}


	




