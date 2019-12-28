#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main()
{
    vector<int> vect;   set<int> s;
    int n=0, k=0;
    cout << "Enter the number of elements you want to enter:";
    cin >> n;
    cout << "\nEnter the values:\n";
    for( int i=0; i<n; i++  )
    {
        cin >> k;
        s.insert(k);
    }

    for ( auto i=s.begin(); i!=s.end(); i++)
        vect.push_back(*i);//CHECK ERASE FUNCTION

    for ( int i=0 ; i < vect.size(); i++)
        cout << vect[i] << " ";

        int n_1=vect.size()-1;

    cout << "Required triplets are: \n";
    for ( int i = n_1; i>=2; --i )
        for ( int j = i-1; j>=1; --j )
            for ( int k = i-2; k>=0; --k )
            {
             if(  (vect[i] + vect[j] + vect[k]) == 0)
                 cout << "\n{ " << vect[i] << "," << vect[j] << "," << vect[k] << " }";
            }

        return 0;

}
