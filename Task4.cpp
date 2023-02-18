#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string txt="";
    int count=0;

    cin.ignore();
    getline(cin, txt);

    for (int i=0; i<txt.length(); i++){
        if (nums(txt[i])) count++;
    }

    cout<<"amount of numbers: "<<count<<endl;

}

bool nums(char a){
    return (
    (a=='0')||
    (a=='1')||
    (a=='2')||
    (a=='3')||
    (a=='4')||
    (a=='5')||
    (a=='6')||
    (a=='7')||
    (a=='8')||
    (a=='9')
    );
}
