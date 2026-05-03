#include <iostream>
using namespace std;


bool isEven (int n);
int factorial (int n);
bool isPrime (int n);


int main () {

    cout << isEven(6) << endl;

    cout << factorial(3)<< endl;
    string result = (isPrime(4))? "True" : "False";
    cout<< result<<endl;

    return 0;

}

bool isEven (int n) {
    return n % 2 == 0;
}

int factorial (int n) {
    if (n == 0) return 1;
    return n * factorial(n-1);
    
}

bool isPrime(int n) {
    if (n < 2) return false;
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
