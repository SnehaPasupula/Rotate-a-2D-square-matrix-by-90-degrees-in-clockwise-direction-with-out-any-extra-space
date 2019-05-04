//Given a 2D square matrix, rotate the matrix by 90 degrees in clockwise manner and then print the rotated matrix. 
 //Refer to README.md for sample input and output
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
   int n;
  
  
    cin>>T;  //Number of Testcases
    for(int l=1;l<=T;l++)
    {
        cin>>n;       //size of the square matrix n*n
        int a[n][n];
        cout<<"Test Case #"<<l<<":"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
         cin>>a[i][j];
            }
        }
       
        
  for(int i=0;i<n;i++)   //using loops to print rotated array
        {
            for(int j=n-1;j>=0;j--)
            {
             
              cout<<a[j][i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
