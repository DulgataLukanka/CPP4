#include <iostream>
using namespace std;
int main ()
{
    int Row,s;
    cout<<"Enter Number ";
    cin>>Row;
    s=Row;
    for (int i=0; i<Row; i++)
    {
        for (int j=0; j<i; j++)
        {
      cout<<" ";
        }
        for (int star =0; star<s; star++)
    {
       cout<<"*";
    }
    s--;
    cout<<endl;
    }
 return 0;
}
