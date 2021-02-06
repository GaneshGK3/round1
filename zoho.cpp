#include <iostream>
using namespace std;
int main() {
int x, n , count=0;
cin >>x;

for (int i = x; i >0  ; i--)
{
    for(int j=0; j<5; j++)
       { 
           cout << i ;
            count++;
       }
        cout <<endl;

}

return 0;
}