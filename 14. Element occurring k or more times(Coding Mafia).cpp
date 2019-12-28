#include<iostream>
#include<map>

using namespace std;

int main()
{
    char input_k;
    int z;
    pair<char,int> p;
    map<char , int> m;

    cout << "Enter elements in map (press 'p' to exit):\n";

    map<char , int >::iterator it = m.begin(), i;

    cin >> input_k;
        p.first = input_k;
        p.second = 1;
        m.insert(p);

    for ( ; ; it++)
    {
        z=1;
        cin >> input_k;
        if ( input_k == 'p' )
             break;
        for( i=m.begin(); i!=m.end() ; i++)
        {
          if ( (*i).first != input_k )
            continue;
          else
          {
              (*i).second+=1;
              z=0;
              break;
          }
        }

          if ( z==1)
            {
                p.first = input_k;
                p.second = 1;
                m.insert(p);
            }
    }

     cout << "Enter the minimum frequency(number of occurrence) an element should have:";
        cin >> z;                     //not declaring a new variable, using "z" as a new var.

        for ( it=m.begin() ; it!=m.end() ; it++)
            if ( (*it).second >= z)
                cout << "\n The element is "<< (*it).first << " and number of occurrence is " << (*it).second << ".";
     return 0;
}
