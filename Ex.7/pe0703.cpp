#include <iostream>
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void showBox(box b);
void changeV(box * pb);
int main()
{
	box b1 = {"IKEA", 1.2, 2.3, 3.4, 0.};
	showBox(b1);
	changeV(&b1);
	showBox(b1);
	return 0;
}
void showBox(box b)
{
	using namespace std;
	cout << "maker: " << b.maker << endl;
	cout << "height: " << b.height << endl;
	cout << "width: " << b.width << endl;
	cout << "length: " << b.length << endl;
	cout << "volume: " << b.volume << endl;
	cout << endl;
}
void changeV(box * pb)
{
	using namespace std;
	pb->volume = pb->height * pb->width * pb->length;
}