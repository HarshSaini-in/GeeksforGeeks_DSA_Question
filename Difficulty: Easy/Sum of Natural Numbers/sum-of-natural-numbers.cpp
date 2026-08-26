#include <iostream>
using namespace std;

// int Sum(int n){
//     if( n == 0 || n == 1){
//         return n;
//     }
//     return (n + Sum(n-1));
// }

int main() {
    int n;
    cin >> n;

    int sum = 0 ;
    for(int i = 1 ; i <= n ; i++){
        sum += i;
    }
    cout<<sum;
    return 0;
}