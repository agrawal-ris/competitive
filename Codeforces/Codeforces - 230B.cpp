#include <iostream>
#include <math.h>
using namespace std;

long long int checkprime (long long int n) {
    n = pow(n,0.5);
    if (n%2 == 0 && n!=2)
    return 0;
    else
    {
       long long int z = pow(n,0.5);
        for (long long int i=3;i<=z;i=i+2)
        {
            if (n%i == 0)
            {
                
                return 0;
                break;
            }
        }
        return 1;
    }
    
    
    
    
}
int main () {
    long long int n, a[100005];
    
    cin>>n;
    for (long long int i=0;i<n;i++)
    {
        cin>>a[i];
        long long int z = pow(a[i],0.5);
        z = z*z;
        
        if (z == a[i] && z != 1)
        {
        if (checkprime(z))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
        
        
        }
        else
        cout<<"NO"<<endl;
    }
}
