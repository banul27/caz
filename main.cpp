#include <iostream>
using namespace std;

int v[1001], a[1001];
int main(){
    int n, m, i, j, p, x, contor=0, max, ma;
    cin >> n >> m;
    for(i=1; i<=n; i++)
        cin >> v[i];
    for(j=1; j<=m; j++){
        cin >> ma;
        x=ma;
        for(i=1; i<=n; i++)
            if(a[i]==1 && v[i]!=0){
                if(v[i]<x){
                    x=x-v[i];
                    v[i]=0;
                }
                else{
                    v[i]=v[i]-x;
                    x=0;
                }
            }
        if(x==0)
            cout << contor << " ";
        else{
            while(x!=0){
                max=-1;
                for(i=1; i<=n; i++)
                    if(v[i]>max){
                        max=v[i];
                        p=i;
                    }
                a[p]=1;
                if(v[p]>x){
                    v[p]=v[p]-x;
                    x=0;
                }
                else{
                    x=x-v[p];
                    v[p]=0;
                }
                contor++;
            }
        cout << contor << " ";
        }
    }
    return 0;
}
