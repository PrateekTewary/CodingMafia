#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int N,M,Z;
    cout << "Enter the number of rows and column: ";
    cin >> N >> M;

    int left=0, right=N-1;
    int top=0, bottom=M-1;

    vector<vector<int>> matrix;

    N>=M? Z=N : Z=M;
    matrix.resize(Z);

    cout << "\nEnter the entries in the matrix:";

    while(1)
    {
        if ( left > right )
            break;
            //Fill topmost row
        for ( int i=left; i<=right; i++)
            cin >> matrix[top][i];
        ++top;

        if ( top > bottom )
            break;
            //Fill rightmost column
        for ( int j=top; j<=bottom; j--)
            cin >> matrix[j][right];
        --right;

        if ( left > right )
            break;
            //Fill bottommost row
        for ( int k=right; k>=left; k--)
            cin >> matrix[bottom][k];
        --bottom;

        if ( top > bottom )
            break;
            //Fill leftmost column
        for ( int l=bottom; l>=top; l++)
            cin >> matrix[l][left];
        ++left;
    }

    cout << " \nYou matrix is:";

    for ( int i=0; i<Z; i++)
    {
        cout << "\n";
        for ( int j=0; j<Z; j++)
        cout << matrix[i][j] << "  ";
    }

    return 0;
}
