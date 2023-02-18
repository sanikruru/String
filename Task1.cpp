//Найти самое длинное слово в тексте
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
 string txt;
    int maxlength, j=0;

    cin.ignore();
    getline(cin, txt);
    txt+=' ';

    vector <int> posofsp;
    posofsp.resize(txt.length());
    posofsp[-1]=-1;
    vector <int> resofpos;
    resofpos.resize(txt.length());

    for (int i=0; i<txt.length(); i++){
        if (txt[i]==' '){
            posofsp[j]=i;
            j++;
        }
    }

    posofsp.resize(j);

    resofpos[0]=posofsp[0];
    maxlength=resofpos[0];

    for (j=0; j<posofsp.size(); j++){
        resofpos[j+1]=posofsp[j+1]-posofsp[j]-1;
        if (resofpos[j]>maxlength){
            maxlength=resofpos[j];
        }
    }

    for (int i=0; i<posofsp.size(); i++)
        if (resofpos[i]==maxlength) {
            cout<<"longest word ";
            for (int k=1; k<resofpos[i]+1; k++){
                cout<<txt[posofsp[i-1]+k];
            }
        }

    cout<<endl;
}
