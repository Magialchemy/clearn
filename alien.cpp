#include <iostream>

using namespace std;

int main (){
    int num, alcohol;
    cin >> num;
    cin >> alcohol;
    int* hand;
    hand = new int[num];
    for(int i = 0;i < num;i++){
        cin >> hand[i];
    }
    int washed = 0;
    while (true)
    {
        alcohol -= hand[washed];
        if(alcohol < 0) break;
        washed++;
        if(washed == num) break;
    }
    cout << washed << endl;
    return 0;
}