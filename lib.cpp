#include "lib.h"

// tìm số chẵn lớn nhất của dãy số
int maxEven(vector<int> v)
{
    int ans = -1;
    for (int x: v)
        if (x % 2 == 0 && x > ans)
            ans = x;
    return ans;
}