#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;

class radix_test
{
    const int bit; 
    public:
    radix_test(int offset) : bit(offset) {} 
    bool operator()(int value) const 
    {
        if (bit == 31) 
            return value < 0;
        else
            return !(value & (1 << bit)); 
    }
};
 

void lsd_radix_sort(int *first, int *last)
{
    for (int lsb = 0; lsb < 32; ++lsb) 
    {
        stable_partition(first, last, radix_test(lsb));
    }
}
 

void msd_radix_sort(int *first, int *last, int msb = 31)
{
    if (first != last && msb >= 0)
    {
        int *mid = partition(first, last, radix_test(msb));
        msb--; 
        msd_radix_sort(first, mid, msb);
        msd_radix_sort(mid, last, msb); 
    }
}

int main(){
    int data[] = {300, 0, -95, 10, -2506, -5, 244, -4, 70};

    cout << "Before Sorting:" << std::endl;

    copy(data, data + 8, ostream_iterator<int>(cout, " "));
 
    lsd_radix_sort(data, data + 8);
    cout << "\nAfter Sorting:" << endl;
    copy(data, data + 8, ostream_iterator<int>(cout, " "));
     return 0;
}
