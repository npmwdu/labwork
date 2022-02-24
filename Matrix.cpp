#include <iostream>
using std::cout;
using std::endl;
#include <cmath>
using std::rand;
using std::srand;
#include <ctime>
using std::time;

int main(){
    setlocale(LC_ALL, "Ukrainian");
    cout << "Matrix A before changes:" << endl;
    const int n = 10;
    const int m = 10;
    int a[n][m] = {};
    int total;
    cout << "-----------------------------------------------------------------------------------------------------\n";

    srand(time(NULL));
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<m; ++j){
            a[i][j] = rand() % 100;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "-----------------------------------------------------------------------------------------------------\n";

    for(int i = 0; i<n; ++i){
        total = 0;
        for(int j = 0; j<m; ++j){
            total += a[i][j];
        }

       a[i][i] = total;


        cout << "Sum of numbers " << i+1 << " : " << total << endl;
    }


 cout << "-----------------------------------------------------------------------------------------------------\n";
    cout << "Matrix A after changes:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
//            a[j][j] = total;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
