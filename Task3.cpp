#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
string txt=" ";
    int j=1, max=0, wp;

    cin.ignore();
    getline(cin, txt);
    txt+=' ';

    vector <string> words;
    vector <int> posofsp;
    posofsp.resize(txt.length());
    posofsp[0]=0;
    vector <int> resofsch;

    for (int i=0; i<txt.length(); i++){
        if (txt[i]==' '){
            posofsp[j]=i;
            j++;
        }
    }

    posofsp.resize(j);
    words.resize(j-1);
    resofsch.resize(j-1);

    for (int i=0, a; i<words.size(); i++){
        a=posofsp[i+1]-posofsp[i];
        words[i]=txt.substr(posofsp[i], a);
    }

    for (int i=0; i<words.size(); i++){
        for (int j=0; j<words[i].length(); j++){
            if (words[i][j]==' ') words[i].erase(j, 1);
        }
    }

    for (int i=0; i<words.size(); i++){
        for (int j=0; j<words.size(); j++){
            if (words[i]==words[j]) resofsch[i]++;
        }
    }

    for (int i=0; i<words.size(); i++){
        if (resofsch[i]>max) {
            max=resofsch[i];
            wp=i;
        }
    }

    cout<<"First of the most counts word is <"<<words[wp]<<">\n";
}
