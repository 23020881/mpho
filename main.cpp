#include <iostream>
#include <cmath>

using namespace std;

void distance()
{
double x1,y1,x2,y2;
double dist;

  cout<<"enter x1"<<endl;
  cin>>x1;

  cout<<"enter x2"<<endl;
  cin>>x2;

  cout<<"enter y1"<<endl;
  cin>>y1;

  cout<<"enter y2"<<endl;
  cin>>y2;

dist=sqrt(pow((x1-x2),2)+pow((y1-y2),2));

   cout<<"the distance between point 1 and point 2 is:"<<dist<<endl;
}

int main()
{

  distance();

return 0;
}
