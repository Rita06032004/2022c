int diagonalSum(int** mat, int matSize, int* matColSize){
    int N=matSize;

    int sum=0;
    for(int i=0;i<matSize;i++){
        sum+=mat[i][i];
        sum+=mat[i][N-1-i];
    }
    if(N%2==1) sum-=mat[N/2][N/2];
    return sum;

}
