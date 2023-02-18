#include <iostream> 
#include <string>
using namespace std;

int main (){
string txt1="", txt2="";

    cin.ignore();
    getline(cin, txt1);

    for (int i=0; i<txt1.length(); i++){
        if (txt1[i]==' '||txt1[i+1]==' ') txt2+=txt1[i];
        else {
            txt2+=txt1[i];
            txt2+=' ';
        }
    }

    cout<<txt2<<endl;

}
