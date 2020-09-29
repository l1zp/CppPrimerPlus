#include <iostream>
#include <cstring>
using namespace std;
const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for(int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done.\n";
	return 0;
}

int getinfo(student pa[], int n)
{
	cout << "Enter the infomation of students up to " << n;
	int count;
	for (count = 0; count < n; count++ )
	{
		cout << "Student #" << count+1 << ": \n";
		cout << "Enter the full name: ";
		cin.get(pa[count].fullname, 30).get();
		if (!strlen(pa[count].fullname))
			break;
		// cin.clear();
		cout << "Enter the hobby: ";
		cin.get(pa[count].hobby, 30).get();
		cout << "Enter the ooplevel: ";
		cin >> pa[count].ooplevel;
		cin.get();
	}
	return count;
}
void display1(student st)
{
	cout << "Full name: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "ooplevel: " << st.ooplevel << endl;
}
void display2(const student * ps)
{
	cout << "Full name: " << ps->fullname << endl;
	cout << "Hobby: " << ps->hobby << endl;
	cout << "ooplevel: " << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i ++)
		display2(pa + i);
}
