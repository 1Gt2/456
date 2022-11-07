#include <iostream>
using namespace std;
int getMaxsum(int n, int* a)
{
 int sum1=0,t=0,sum=0;
 for (int i=0;i<n;i++)
 {
  if (a[i]>0)
   t=1;
  if (t==1)
  {
   sum1+=a[i];
   sum=sum<sum1?sum1:sum;
  }
 }
 return sum;
}
int main()
{
 int n, a[50];
 cout<<"请输入数组长度：";
 cin>>n;
 cout<<"请输入数组元素：";
 
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }
  cout << "最大子段和为：";
  cout << getMaxsum(n, a);
  cout <<"\n";
  system("pause");
}