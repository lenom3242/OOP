//#include <iostream>
//using namespace std;
//class GeomFigure{
//	int x, y;
//	string id;
//public:
//	void setx(int newx){
//		x = newx;
//	}
//	void sety(int newy){
//		y = newy;
//	}
//	int getx(){
//		return x;
//	}
//	int gety(){
//		return y;
//	}
//	void setid(string newid){
//		id = newid;
//	}
//	string getid(){
//		return id;
//	}
//	void vivodinformacii() {
//		cout << x << ";" << y << endl;
//	}
//	GeomFigure(int newx=0,int newy=0, string newid="anon") : x(newx), y(newy), id(newid) {}
//	~GeomFigure() {cout<< "Geomfigure " << id << " is deleted\n"; }
//};
//class Rectangle:public GeomFigure{
//	int dlina, shirina;
//public:
//	void setdlina(int newdlina) {
//		dlina = newdlina;
//	}
//	void setshirina(int newshirina) {
//		shirina = newshirina;
//	}
//	int returndlina() {
//		return dlina;
//	}
//	int returnshirina() {
//		return shirina;
//	}
//	void vivodinformacii2() {
//		vivodinformacii();
//		cout <<"Rectangle information: " << getid() << " " << dlina << " " << shirina << endl;
//	}
//	int ploshad() {
//		return dlina * shirina;
//	}
//	int perimetr() {
//		return 2 * (dlina + shirina);
//	}
//
//	Rectangle(int newdlina = 1, int newshirina = 1,int newx = 0, int newy = 0, string newid = "anon") : dlina(newdlina), shirina(newshirina) ,GeomFigure(newx,newy,newid) {}
//	~Rectangle() { cout << "Rectangle " << getid() << " is deleted\n"; }
//};
//class Circle : public GeomFigure {
//	int radius;
//public:
//	void setradius(int newradius) {
//		radius = newradius;
//	}
//	int getradius() {
//		return radius;
//	}
//	void information3() {
//		vivodinformacii();
//		cout << getid() << " " << getradius() << endl;
//	}
//	int ploshadkruga() {
//		return 3.14 * radius * radius;
//	}
//	int dlinaokruzhnostri() {
//		return 2 * 3.14 * radius;
//	}
//	Circle(int newradius = 1, int newx = 0, int newy = 0, string newid = "anon") : radius(newradius), GeomFigure(newx, newy, newid) {}
//	~Circle() {
//		cout << "Circle " << getid() << " is deleted\n";
//	}
//};
//void main(){
//	Rectangle first(3, 4, -2, 2);
//	first.setx(0);
//	first.sety(1);
//	cout << "Ploshad " <<  first.ploshad() << endl;
//	cout << "Perimetr " << first.perimetr() << endl;
//	first.vivodinformacii2();
//	Circle* p_circle = new Circle();
//	p_circle->setx(1);
//	p_circle->sety(1);
//	cout << "Ploshad: " << p_circle->ploshadkruga() << " dlina okruzhnosti: " << p_circle->dlinaokruzhnostri() << endl;
//	delete p_circle;
//}