#include <iostream>
#include<cmath>
#include<math.h>
using namespace std;
int r1 , c1 , r2, c2, i, j, k;
double A [10][10] , B[10][10],C[10][10]; ;
void TheMatrices();
void Show_A();
void Show_B();
void Multiplication();
int main()
{  /* //To store the value of matrix(A)
    cout<<"Enter the number of rows of matrix(A)="<<endl;
    cin>>r1;
     cout<<"Enter the number of columns of matrix(A)="<<endl;
    cin>>c1;
  
    cout<<"Enter the values of matrix (A)"<<endl;
for(int i=0; i<r1; i++)
                       { for(int j=0; j<c1; j++)
                              {cout<<"(a)"<<i+1<<j+1<<" = ";
                               cin>>A[i][j]; }};
//To store the value of the matrix(B)
    cout<<"Enter the number of rows of matrix(B)="<<endl;
    cin>>r2;
     cout<<"Enter the number of columns of matrix(B)="<<endl;
    cin>>c2;
    cout<<"Enter the value of matrix (B)"<<endl;

for(int i=0; i<r2; i++)
                       { for(int j=0; j<c2; j++)
                              {cout<<"(b)"<<i+1<<j+1<<" = ";
                               cin>>B[i][j]; }};      */                      
 TheMatrices();
 Multiplication();
 cout<<endl;
//To make the transpose of A
cout<<"C= the transpose of matrix A ="<<endl;
for(int i=0; i<c1; i++)
             { for(int j=0; j<r1; j++)
                        {cout<<" "<<A[j][i];
                        if(j==r1-1)
                         cout<<endl<<endl;
                         }};
/*//To multiply two matrix
//To initialize an array
float mult[10][10]={0};
if(c1!=r2){
    cout<<"Error! c1 is not equal r2"<<endl;TheMatrices(); }
    else{
    for(int i=0; i<r1; i++)
    {for(int k=0; k<c1; k++)
    for(int j=0; j<c2; j++ )
    {mult[i][j] += A[i][k]*B[k][j];
    }}
    };
    for (int i=0;i<r1;i++)
    {for(int j=0; j<c2;j++)
    cout<<" "<<mult[i][j];
    if(j==c2-1)
    cout<<endl<<endl;}
*/
return 0;}

void TheMatrices(){
    //To store the value of matrix(A)
    cout<<"Enter the number of rows of matrix(A)="<<endl;
    cin>>r1;
     cout<<"Enter the number of columns of matrix(A)="<<endl;
    cin>>c1;
  
    cout<<"Enter the values of matrix (A)"<<endl;
for(int i=0; i<r1; i++)
                       { for(int j=0; j<c1; j++)
                              {cout<<"(a)"<<i+1<<j+1<<" = ";
                               cin>>A[i][j]; }};
//To store the value of the matrix(B)
    cout<<"Enter the number of rows of matrix(B)="<<endl;
    cin>>r2;
     cout<<"Enter the number of columns of matrix(B)="<<endl;
    cin>>c2;
    cout<<"Enter the value of matrix (B)"<<endl;

for(int i=0; i<r2; i++)
                       { for(int j=0; j<c2; j++)
                              {cout<<"(b)"<<i+1<<j+1<<" = ";
                               cin>>B[i][j]; }};
}

void Show_A(){
    //To show the matrix (A)
    cout<<"Matrix(A) ="<<endl;
for(int i=0; i<r1; i++)
             { for(int j=0; j<c1; j++)
                        {cout<<" "<<A[i][j];
                         if(j==c1-1 )
                         cout<<endl<<endl;
                         }};
};

void Show_B(){
    //To show the matrix (B)
    cout<<"Matrix(B) ="<<endl;
for(int i=0; i<r2; i++)
             { for(int j=0; j<c2; j++)
                        {cout<<" "<<B[i][j];
                         if(j==c2-1 )
                         cout<<endl<<endl;
                         }};
};
void Multiplication() {
    //To multiply two matrix
    double mult[10][10];
    if (c1 != r2) {
        cout << "Error! c1 is not equal r2" << endl;
       TheMatrices();
        Multiplication();
    }

    else {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++) {
                for (int k = 0; k < c1; k++)
                {
                    mult[i][j] = A[i][k] * B[k][j];
                }
            }
        }
        cout << endl << "The multiplication=" << endl;
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << " " << mult[i][j];
                if (j == c2 - 1)
                    cout << endl << endl;
            }
        }

    };

   }
    
