//Имя.расширение
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    /*setlocale(LC_ALL, "RUS");
    ofstream outfile;
    outfile.open("my_file.txt");
    string str;
    getline(cin, str);
    outfile << str;
    outfile.close();*/
    //==================================================================
    ifstream infile;
    infile.open("my_file.txt");
    string str1;
    getline(infile, str1);
    cout << str1 << endl;
    infile.close();
    return 0;
}