#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n, count=0;
    cin >> n;
    
    //write your code here
   

    while (n != 0) {
        n /= 10;
        count++;
    }

    cout << "Number of digits: " << count << endl;
    return 0;
}
