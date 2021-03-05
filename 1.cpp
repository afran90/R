#include <bits/stdc++.h>
using namespace std;
int main() {
    int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
    int rowMax=0, colMax=0,t;
    for (int i=0;i<3;i++){
            t=0;
        for (int j=0;j<4;j++)
        {
            if (x[i][j]>t)
                t=x[i][j];
        }
        rowMax+=t;

    }

for (int i=0;i<4;i++){
            t=0;
        for (int j=0;j<3;j++)
        {
            if (x[j][i]>t)
                t=x[j][i];
        }
        colMax+=t;

    }
    cout<<min(colMax,rowMax);

    return 0;
}



