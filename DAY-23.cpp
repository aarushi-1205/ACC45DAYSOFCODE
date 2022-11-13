#include <iostream>
using namespace std;
int n = 6;
int main(int argc, char **argv) {
   int pdf = 0;
   for (int i = 0; i < n; i++) {
      pdf = rand() % 200;
      if (pdf > 360)
         cout << 1 << " ";
      else if (pdf < 0)
         cout << 0 << " ";
      else
         cout << pdf * 0.1 / 360 << " ";
   }
   cout << "...";
}
