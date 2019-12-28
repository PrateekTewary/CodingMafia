#include<iostream>
#include<set>
#include<math.h>
#include<vector>

using namespace std;

void subset(vector<int> arr)
       {
         for ( int i=0; i< pow( 2 , arr.size() ) ; i++)
         {
           cout << "{";

           for ( int j=0 ; j<i ; j++)
            {
                if ( i & (1<<j) )
                    cout << " "<< arr[j] << " ";
            }

           cout << "}, " << endl;
        }
       }


int main()
{
    int no=0, k;
    set <int> s;


    cout<<"Enter the number of elements in your set:";
    cin>>no;
    cout<<"Enter the elements of your set:";
    for ( int i=0; i<no; i++)
    {
        cin >> k;
        s.insert(k);
    }

    vector<int> arr;

    for ( auto it=s.begin(); it!=s.end(); it++)
        arr.push_back(*it);

    cout << "{";

       subset(arr);

    cout << "}";

    return 0;
}
