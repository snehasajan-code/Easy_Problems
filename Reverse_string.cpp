
#include <iostream>
#include <string>

using namespace std;

int main() {
    /*declaring variable*/
    string str;

    /*input string*/
    cout<<"Enter a string: "<<endl;
    getline(cin,str);

    string rev=" ";
    for(int i=str.length()-1;i>=0;i--)
    {
        rev=rev+str[i];
    }

    cout<<"Reverse of "<< rev<<endl;

    return 0;
}
