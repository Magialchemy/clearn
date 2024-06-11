#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() { 
    string str;
    cin >> str;
    int upper = 0;
    int lower = 0;
    for(int i = 0;i < strlen(str.c_str());i++){
        if(isupper(str.c_str()[i])){
            upper++;
        }else if(islower(str.c_str()[i])){
            lower++;
        }
    }
    if(upper > lower){
        transform(str.begin(),str.end(),str.begin(),::toupper);
    }else{
        transform(str.begin(),str.end(),str.begin(),::tolower);
    }
    cout << str;
    return 0;
}