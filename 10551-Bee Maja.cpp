#include <bits/stdc++.h>

using namespace std;

#define N 100000

int x = 0;
int y = 0;
int step = 1;
int cord_x[N+1000];
int cord_y[N+1000];

//update value
void walk(){
    cord_x[step] = x;
    cord_y[step] = y;
    step++;

    if(step > N)
        return;
}
void wn(int n){
    while(n--){
        x--;
        walk();
    }
}
void no(int n){
    while(n--){
        y--;
        walk();
    }
}
void en(int n){
    while(n--){
        x++;
        y--;
        walk();
    }
}
void es(int n){
    while(n--){
        x++;
        walk();
    }
}
void so(int n){
    while(n--){
        y++;
        walk();
    }
}
void ws(int n){
    while(n--){
        x--;
        y++;
        walk();
    }
}

int main(){

    walk();
    so(1);
    for(int i = 1; step < N; i++){
        wn(i);
        no(i);
        en(i);
        es(i);
        so(i+1);
        ws(i);

        if(step > N) break;
//        cout << i << endl;
    }
//     1, 7, 12

    int tmp;
    while(scanf("%d", &tmp) != EOF){
        cout << cord_x[tmp] << " " << cord_y[tmp] << endl;
    }
    return 0;
}
