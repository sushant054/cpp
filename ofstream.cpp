#include <iostream>
#include <fstream>
using namespace std;
int main() {
  // Create and open a text file
  //ofstream-creates and write to files
  ofstream MyFile("newfile.txt");
  
  // Write to the file
  MyFile << "hey...hie!";

 
    MyFile.close();
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 
  string myText;
  // Read from file
  ifstream MyReadFile("filename.txt");
  // Use a while loop together with the getline() function to read the file line by line
  while (getline (MyReadFile, myText)) {
    cout << myText;
  }

  MyReadFile.close();
}








