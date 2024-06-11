#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>

using namespace std;

int swap(int *a,int *b){
    int temp = *a;
    *b = *a;
    *b = temp;
    return 0;
}

int binary_search(int n, int *a, int key){

    int left = 0;
    int right = n - 1;
    int center;

    do
    {
        center = left + right;
        if(a[center] == key)
        {
            return center;
        }
        else if (a[center] < key)
        {
            left = center + 1;
        }
        else
        {
            right = center - 1;
        }
    } while (left <= right);
    
    return -1; // 探索失敗
}

int sort(int n,int *x){
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++){
            if(x[i] < x[j]){
                swap(x[i],x[j]);
            }
        }
    }
    return 0;
}

int main() {
    int nx, ky, idx;
    int *x;

    srand(time(nullptr));

    cout << "2分探索" << endl;
    cout << "要素数：";
    cin >> nx;
    x = new int[nx];

    for(int i = 0; i < nx;i++){
        x[i] = rand() % 100;
    }
    for(int i = 0;i < nx;i++){
        cout << setw(2) << x[i] << ' ';
    }
    cout << endl;
    cout << "ソートします" << endl;
    sort(nx,x);
    
    for(int i = 0;i < nx;i++){
        cout << setw(2) << x[i] << ' ';
    }
    cout << endl;
    cout << "探す値：";
    cin >> ky;
    idx = binary_search(nx,x,ky);

    if(idx == -1)
        cout << "探索に失敗しました・・・" << endl;
    else
        cout << ky <<"は" << "x[" << idx << "]にあります。" << endl;
    return 0;
}