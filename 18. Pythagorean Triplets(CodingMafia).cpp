#include<iostream>
#include<vector>
#include<set>
#include<math.h>

using namespace std;

set<int> s;   vector<int> vect;

int main()
{
    //INPUT
    {
       int k=1;
       cout << "Enter the elements of the array (enter zero to exit): ";

       for ( auto i=s.begin();  ; i++)
       {
           cin >> k;

           if ( k!=0 )
            s.insert(k);
           else
            break;
       }
   }
   //Input ends here.

    for ( auto i=s.begin(); i!=s.end(); i++)
        vect.push_back(*i);

    int n_1=vect.size()-1, sum;     //Loop variables

    for ( int i=n_1; i>=1; i--)
        for ( int j=i-1; j>=0; j--)
    {
        sum = pow( vect[i] , 2 ) + pow( vect[j] , 2 );        //Calculating a^2+b^2=c^2/sum(in this case)
        for ( auto z=vect.begin(); z!=vect.end(); z++)
            if ( sum == pow( (*z) , 2 ))                      //checking if c^2/sum exits in the vector
            cout << "\n(" << vect[i] << "," << vect[j] << "," << (*z) << ")";
    }

    return 0;
}
