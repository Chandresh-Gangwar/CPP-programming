#include <iostream>
using namespace std;
class A
{
	public: void print()
	{
		cout<<"Class A \n";
	}
};
 class B
 {
 	public: void display()
 	{
 		cout<<"class B\n";
 		
	 }
};
class C:public A,public B
{
	public: void show()
	{
		cout<<"class C";
	}
};
 int main()
{
	C ob;
    ob.print();
   ob.display();
	ob.show();
	return 0;
}
