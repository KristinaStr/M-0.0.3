#include <iostream>
#include <sstream>
using namespace std ;

bool read_numbers(int a[10])
    {
        string string;
        getline( cin, string );
        istringstream stream( string );
        bool success = true;
        for( int i = 0; i < 10; ++i ) 
            {
                if( !( stream >> a[ i ] ) )
                    {
                        success = false;
                        break;
                    }
            }
        return success;
    }

int main()
{
int a1[10];
int a2[10];
int MAX=0;

if (read_numbers(a1) && read_numbers(a2))
    {
        for (int i=0; i<10;i++)
            {
                for (int j=i;j<10;j++)
                    {
                        if (MAX < a1[i]+a2[j])
                            {
                                MAX= a1[i]+a2[j];
                            }
                    }
            }
        cout<<MAX;
    }
else
    cout<< "An errorbhas occureted while reading numbers";
}
