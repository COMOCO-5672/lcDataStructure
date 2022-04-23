
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int num = 23121;
    vector<int> a;
    while (num>0)
    {
        int val = num % 10;
        a.insert(a.begin(),val);
        num/=10;
    }
    for (size_t i = 0; i < a.size() ; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
