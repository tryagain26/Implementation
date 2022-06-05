#include<bits/stdc++.h>
using namespace std;



int arr[210][210];

int main(){
    int t;
    cin >> t;
    int maxx = -9999999;
    while(t--){
        int n,m;
        cin >> n >> m;

        for(int i = 1; i <= n ;i++){
            for(int j = 1; j <= m; j++){
                cin >> arr[i][j];
            }
        }
        int sum = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                int x = i, y= j;
                while(x>0 && x <= n && y<= m && y> 0){
                    sum += arr[x][y];
                    x--;
                    y--;
                }
                x= i, y = j;
                while(x>0 && x <= n && y>0 && y <= m){
                    sum += arr[x][y];
                    x--;
                    y++;
                }
                x=i, y = j;
                while(x>0 && x <= n && y<= m && y> 0){
                    sum+= arr[x][y];
                    x++;
                    y--;
                }
                x=i, y = j;
                while(x>0 && x <= n && y<= m && y> 0){
                    sum += arr[x][y];
                    x++;
                    y++;
                }

                sum = sum - 3*arr[i][j];
                maxx = max(maxx, sum);
                sum = 0;
            }
        }
        cout << maxx << "\n";
        maxx = -9999999;
    }
    return 0;
}
