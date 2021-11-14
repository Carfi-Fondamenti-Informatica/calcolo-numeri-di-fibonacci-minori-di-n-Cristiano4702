#include <iostream>
using namespace std;

int main() {
   int n=0, a=1, b=1, c;
   cin >> n;

   cout << a << endl;
   cout << b << endl;

    for(int i=2; i<n; i++)
    {
        c = a+b;

         if(c<n)
         {
              cout << c << endl;
         }

         else
         {
               return 0;
         }

        a=b;
        b=c;
    }
   
}
