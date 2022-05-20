int mat[505][505], arr[505][505];
int query(int lx, int ly, int rx, int ry)
{
    int ans=mat[rx][ry];

    if(lx>0){
        ans-=mat[lx-1][ry];
    }
    if(ly>0){
        ans-=mat[rx][ly-1];
    }
    if(lx && ly)
         ans+=mat[lx-1][ly-1];

    return ans;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
          for(int j=0; j<m; j++){
                cin >> arr[i][j];
          }
    }
    for(int i=0; i<n; i++){
          for(int j=0; j<m; j++){
                if(i==0)
                    mat[i][j] = arr[i][j];
                else
                    mat[i][j] = arr[i][j] + mat[i-1][j];
          }
    }
    for(int i=0; i<n; i++){
          for(int j=1; j<m; j++){
                mat[i][j] += mat[i][j-1];
          }
    }
    int q;
    cin >> q;
    while(q--){
           int x1, y1, x2, y2;
           cin >> x1 >> y1 >> x2 >> y2;
           cout << query(x1, y1, x2, y2) << endl;
    }
}
