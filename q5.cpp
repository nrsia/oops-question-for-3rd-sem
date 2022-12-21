#include <iostream>
using namespace std;
int cobj,dobj;
class cobject
{
    public:
    cobject()
    {
        cobj++;
    }
    
};
int main()
{
    cobject *a1=new cobject();
    cobject *a2=new cobject();
    cobject *a3=new cobject();
    cobject *a4=new cobject();
    cout<<"Total object created "<<cobj<<endl;
    return 0;
}