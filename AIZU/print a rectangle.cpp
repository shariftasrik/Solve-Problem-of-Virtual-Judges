#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,w;


    while(true)
    {
        cin >>  h >> w;
        if(h==0 && w==0) break;
        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
