#include<iostream>
using namespace std;
class sample
{
	public:
		void date(int dd,int mm,int yy)
		{
			cout<<"current date:";
			cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
		}
		void date(int dd,string mm,int yy)
		{
			cout<<"current date:";
			cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
		}
};
int main()
{
	sample s;
	s.date(1,12,2002);
	s.date(1,"dec",2002);
	return 0;
}
