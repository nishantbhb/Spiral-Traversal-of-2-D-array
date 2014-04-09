#include<iostream>

using namespace std;

int main()
{
    int a[10][10];
    int i,j,r,c,m,n;

    //different no. of rows and columns also work fine i.e. m need not be equal to n

    cout<<"Enter no. of rows:";
    cin>>m;
    cout<<"Enter no. of columns:";
    cin>>n;
    cout<<"Enter array elements:\n";
    //getting array elements from user
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];

    int flag[m][n];

    //marking all elements of flag as unvisited
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            flag[i][j]=0;


    cout<<"Array elements in spiral order:\n";

    //initialising from begining index
    i=j=r=c=0;

    while(flag[i][j]!=1)//exit from while if all the elements are visited
    {

      //traversing first row of remaining elements forwards
      for(c=j;c<n;c++)
      {
          flag[r][c]=1; //marking index as visited
          cout<<a[r][c]<<" ";
      }
      i++; c--;

      //traversing last column of remaining elements downwards
      for(r=i;r<m;r++)
      {
          flag[r][c]=1; //marking index as visited
          cout<<a[r][c]<<" ";
      }
      n--; r--;

      //traversing last row of remaining elements backwards
      for(c=n-1;c>=j;c--)
      {
          flag[r][c]=1; //marking index as visited
          cout<<a[r][c]<<" ";
      }
      m--; c++;

      //traversing first column of remaining elements upwards
      for(r=m-1;r>=i;r--)
      {
          flag[r][c]=1; //marking index as visited
          cout<<a[r][c]<<" ";
      }
      j++; r++; //first index of remaining elements
    }

return 0;

}
