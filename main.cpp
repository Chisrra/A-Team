#include <iostream>

using namespace std;

int main()
{
    int n;
    short val1, val2, val3;
    int total = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>val1>>val2>>val3;
        if( (val1+val2+val3) > 1 ){
            total++;
        }
    }
    cout<<total<<"\n\r";

    return 0;
}
