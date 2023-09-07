#include<bits/stdc++.h>
using namespace std;

int dis[200][200];
int n, m;

void help(){
    for(int k = 1; k<=n; k++){
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                dis[i][j] = max(dis[i][j], min(dis[i][k], dis[k][j]));
            }
        }
    }
}

int main()
{
//    int n, m;
    int test = 0;
    while(cin >> n >> m){
        if(n == 0 && m == 0) break;

        memset(dis, 0, sizeof(dis));
        int c1, c2, p;
        while(m--){
            cin >> c1 >> c2 >> p;
            dis[c1][c2] = dis[c2][c1] = p;
        }
        help();

//        for(int i = 0; i<=n; i++){
//            for(int j = 0; j<=n; j++){
//                cout << dis[i][j] << " ";
//            }
//            cout << endl;
//        }

        int s, d, t, res = 0;
        cin >> s >> d >> t;

        if(t >= dis[s][d])
            res = t / (dis[s][d] - 1);
        if(t % dis[s][d])
            res++;

        cout << "Scenario #"<< ++test << "\n";
        cout << "Minimum Number of Trips = "<< res <<"\n";
        cout << endl;
    }
}
