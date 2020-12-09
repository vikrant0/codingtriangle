Q1. How File Stream Hierarchy is helpful in working with Files in c++
​
--ANS --
​
File stream class hierarchy - The file stream class hierarchy is responsible for input and output of data to and from files. In other words we can store the data in files using the output file stream and can read/access the data using input file stream. Also this data can be modified , updated or deleted according to user choice.
​
There are two types of file streams which help the most in working with files: -
​
1. ofstream - this stream is used to create new files and is mainly used to enter the data in these files. e.g.: -
ofstream fout("test.txt");
fout<<"Hello programers";
fout.close();
​
2. ifstream - this stream is used to read the contents of the file. e.g.: -
ifstream fin("test.txt");
string c;
while(!fin.eof()){
getline(fin,c);

cout<<c;

}
fin.close();
 
Q2. What task does the following program perform?
​
#include<iostream>

#include<fstream>

using namespace std;

int main()

{

char data[100];

ifstream ifile;

//create a text file before executing.

ifile.open ("text.txt");

while ( !ifile.eof() )

{

ifile.getline (data, 100);

cout << data << endl;

}

ifile.close();

return 0;

}

​
--ANS --
​
This program will open a text file "text.txt" using input stream and read it contents. After reading all the contents it will output them on the screen.
 
Q3. WAP to perform following tasks.
 
a. Write the text “login to CUIMS and View Resource Content” in a text file ‘test.txt’. b. Open the same file in append mode and write the text “Better to be busy than to be busy worrying”.
c. Open the file ‘test.txt’ to read the content and display the same on screen.
​
--ANS --
​
#include <iostream>

#include <fstream>

using namespace std;

int main() {

ofstream fout("test.txt");

fout<<"login to CUIMS and View Resource Content\n";

fout.close();

ofstream fout1("test.txt",ios::app); //reopening file in append mode

fout1<<"Better to be busy than to be busy worrying";

fout1.close();

 

cout<<"\nReading contents : \n\n";

ifstream fin("test.txt");

char c;

while(!fin.eof())

{

fin.get(c);

if(fin.tellg()==-1)break;

cout<<c;

}

fin.close();

}

 

Q4. WAP in C++ to read the content from a text file OUT.TXT, count and display the number of alphabets present in it.
​
--ANS --
​
#include <iostream>

#include <fstream>

using namespace std;

int main()

{

ifstream fin("out.txt",ios::in);

char c;

int count=0;

while(fin.tellg()!=-1)

{

fin.get(c);

if(fin.tellg()==-1)

break;

cout<<c;

if(c>=97 && c<=122)

count++;

}

cout<<"\n\tCount : "<<count;

cout<<endl;

fin.close();

 

cout<<endl;

}

 
Q5. WAP in C++ to count the no. of “the” word present in a text file “SAMPLE.TXT”.
​
--ANS --
​
#include <iostream>

#include <fstream>

using namespace std;

int main() {

fstream fin("sample.txt");

string c;

int count=0;

while(!fin.eof())

{

fin>>c;

if(fin.tellg()==0)break;

if(c[0]=='t' && c[1]=='h' &&c[2]=='e' && c[3]=='\0'){

count++;

cout<<c<<endl;}

}

cout<<"\nNo. of the word present in file : "<<count;

}

 
Q6. Write a C++ program to create a file using file handling and check whether the file is created successfully or not. If a file is created successfully then it should print “File Created Successfully” otherwise should print some error message.
​
--ANS --
​
#include <iostream>

#include <fstream>

using namespace std;

int main() {

ofstream fout("test.txt");

if(fout)

{

cout<<"File created successfully!";

}

else cout<<"File not created successfully";

fout.close();

}

 
Q7. Write a program to read every fifth character from a file (using random access seekg() function) & write all those characters on to a different file as well as on screen.
​
--ANS --
​
#include <iostream>

#include <fstream>

using namespace std;

int main() {

ifstream fin("sample.txt");

char c;

ofstream fout("sample2.txt");

int k=4; //reading will start after the fouth character

while(!fin.eof())

{

fin.seekg(k,ios::beg);

fin.get(c);

if(fin.tellg()==-1)break;

fout<<c<<" ";

cout<<c<<" ";

k+=5;

}

}

 
Q8. Write a program that reads a file and copies its content into another file.
​
--ANS --
​
#include <iostream>

#include <fstream>

using namespace std;

int main()

{

ofstream fout;

fout.open("sample.dat");

cout<<"\n\tEnter some content to file 1 : ";

string s;

getline(cin,s);

fout<<s;

fout.close();

ifstream fin;

fin.open("sample.dat");

ofstream fout1;

fout1.open("sample1.dat");

char c;

while(!fin.eof())

{

fin.get(c);

fout1<<c;

}

fout1.close();

fin.close();

 

ifstream fin1;

fin1.open("sample1.dat");

cout<<"\n\tOutput of sample1.txt -> ";

while(!fin1.eof())

{

fin1.get(c);

cout<<c;

}

return 0;

}
