#include <iostream>

using namespace std;

int main() {
    int M, N, K, Q;
    cin >> M >> N >> K >> Q;
    int grid[M][N];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            grid[i][j] = 0;
        }
    }
    
    for (int i = 0; i < K; i++) {
        int x, y, v;
        cin >> x >> y >> v;
        grid[x][y] = v;
    }
   
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
    for (int i = 0; i < Q; i++) {
        int xq, yq;
        cin >> xq >> yq;
        
        int sum = 0;
        for (int j = 0; j < 8; j++) {
            int nx = xq + dx[j];
            int ny = yq + dy[j];
            
            if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
                sum += grid[nx][ny];
            }
        }
        cout << sum << "\n";
    }
    
    return 0;
}
