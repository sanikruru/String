#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
 string txt;

    cin.ignore();
    getline(cin, txt);
    txt+=' ';

    vector <string> words;

    for (int i=0, j=0; i<txt.length(); i++){
        while (txt[j]!=' ') {words[i]+=txt[i]; j++;}
        cout<<words[i]<<endl;
    } 
}
