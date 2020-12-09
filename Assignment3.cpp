Q1. What screen output does the following program produce, and why?

#include <iostream>
#include <fstream>
using namespace std;
int main() {
char character;
int integer;
ofstream out_stream;
ifstream in_stream; /* Create a file containing two
integers */
out_stream.open("Integers");
out_stream<< 123 << ' ' << 456;
out_stream.close();

in_stream.open("Integers");
in_stream>> character >> integer;
cout<< "character: '" << character << "'\n";
cout<< "integer: " << integer << "\n";
in_stream>> character >> integer;
cout<< "character: '" << character << "'\n";
cout<< "integer: " << integer << "\n";
in_stream.close();

return 0;
}
character: ‘1’
integer: 23
character: ‘4’
integer: 56


Q2. Write a program which outputs its own C++ source file to the screen.
2 | P a g e
#include <iostream>
#include <fstream>
using namespace std;
int main() {
 cout<<endl<<endl;
 ifstream fin("main.cpp");
 char c;
 while(!fin.eof())
 {
 fin.get(c);
 if(fin.tellg()!=-1)cout<<c;
 }
 cout<<endl<<endl;
 return 0;
}


Q3. Write a program that (i) starts with the output test statement: cout<<
"Testing: " << 16/2 << " = " << 4*2 <<".\n\n"; and then (ii) outputs its own C++
source file to a file called "WithoutComments.cpp" and to the screen, but
omitting any of the comments enclosed in "/* ... */" markers (and omitting the
markers themselves). The new program in the file "WithoutComments.cpp"
should compile and run in exactly the same way as the program from which it
was generated.
#include <iostream>
#include <fstream>
using namespace std;
int main() {
 cout<< "Testing: " << 16/2 << " = " << 4*2 <<".\n\n";

 ifstream fin("main.cpp");
 ofstream fout("withoutcomments.cpp");
 char c;
 while(!fin.eof())
 {
 fin.get(c);
3 | P a g e
 if(fin.tellg()==-1)
 break;
 if(c=='/')
 {
 while(c!='/')
 fin.get(c);
 }
 cout<<c;
 fout<<c;
 }
 fout.close();
 fin.close();
 return 0;
}


Q4. Write a program to produce the output as shown below: Results:
x value y value expressions results
10 | 5 | x+=y | x=15
10 | 5 | x-=y-2 | x=7
10 | 5 | x*=y*5 | x=250
10 | 5 | x/=x/y | x=5
10 | 5 | x%=y | x=0
#include <iostream>
#include <fstream>
using namespace std;
int main() {
 int x=10,y=5;
 ofstream fout("new.txt");
 cout<<"x value y value expressions
results"<<endl;
 fout<<"x value y value expressions
results"<<endl;
 cout<<x<<" | "<<y<<" | x+=y |
x="<<x+y<<endl;
 fout<<x<<" | "<<y<<" | x+=y |
x="<<x+y<<endl;
4 | P a g e
 cout<<x<<" | "<<y<<" | x-=y-2 |
x="<<x-(y-2)<<endl;
 fout<<x<<" | "<<y<<" | x-=y-2 |
x="<<x-(y-2)<<endl;
 cout<<x<<" | "<<y<<" | x*=y*5 |
x="<<x*(y*5)<<endl;
 fout<<x<<" | "<<y<<" | x*=y*5 |
x="<<x*(y*5)<<endl;
 cout<<x<<" | "<<y<<" | x/=x/y |
x="<<x/(x/y)<<endl;
 fout<<x<<" | "<<y<<" | x/=x/y |
x="<<x/(x/y)<<endl;
 cout<<x<<" | "<<y<<" | x%=y |
x="<<x%y;
 fout<<x<<" | "<<y<<" | x%=y |
x="<<x%y;
}


Q5. Write C++ program to display a table that represents a Pascal triangle of
any size. In Pascal triangle, the first and the second rows are set to 1. Each
element of the triangle (from the third row downward) is the sum of the
element directly above it and the element to the left of the element directly
above it.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter number of rows : ";
 cin>>n;
 int a[n][n];
 ofstream fout("pascal.txt");
5 | P a g e
 for(int i=0;i<n;i++)
 {
 a[i][0]=1;
 a[i][i]=1;
 for(int j=1;j<=n-i;j++){
 printf(" ");
 fout<<" ";}
 printf("%d ",a[i][0]);
 fout<<" "<<a[i][0];
 if(i>0){
 for(int j=1;j<i;j++)
 {
 a[i][j]=a[i-1][j]+a[i-1][j-1];
 printf("%d ",a[i][j]);
 fout<<" "<<a[i][j];
 }
 printf("%d ",a[i][i]);
 fout<<" "<<a[i][i];
 }
 printf("\n");
 fout<<endl;
 }
 return 0;
}
