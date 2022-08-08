#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], i = 0, j = 0,loc=0, ele = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the element" << endl;
    cin >> ele;
    //std::sort(a, a + n);
    i=n-1;
    while(ele<a[i] && i>=0)
    {
        a[i+1]=a[i];
        i=i-1;
    }
    a[i+1]=ele;
    n++;
    for (i = 0; i < n; i++)
    {
        cout<< a[i]<<" ";
    }
    return 0;
}