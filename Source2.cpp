//#include <iostream>
//using namespace std;
//class GeomFigure {
//protected:
//	int x, y;
//	string id;
//public:
//
//	int getx() {
//		return x;
//	}
//	int gety() {
//		return y;
//	}
//	void setid(string newid) {
//		id = newid;
//	}
//	string getid() {
//		return id;
//	}
//	void vivodinformacii() {
//		cout << x << ";" << y << endl;
//	}
//	GeomFigure(int newx = 0, int newy = 0, string newid = "anon") : x(newx), y(newy), id(newid) {}
//	~GeomFigure() { cout << "Geomfigure " << id << " is deleted\n"; }
//};
//class Rectangle :public GeomFigure {
//	int dlina, shirina;
//public:
//	void setx(int newx) { x = newx; }
//	void sety(int newy) { y = newy; }
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
//	void vivodinformacii() {
//		GeomFigure::vivodinformacii();
//		cout << "Rectangle information: " << getid() << " " << dlina << " " << shirina << endl;
//	}
//	int ploshad() {
//		return dlina * shirina;
//	}
//	int perimetr() {
//		return 2 * (dlina + shirina);
//	}
//
//	Rectangle(int newdlina = 1, int newshirina = 1, int newx = 0, int newy = 0, string newid = "anon") : dlina(newdlina), shirina(newshirina), GeomFigure(newx, newy, newid) {}
//	~Rectangle() { cout << "Rectangle " << getid() << " is deleted\n"; }
//};
//class Circle : public GeomFigure {
//	int radius;
//public:
//	void setx(int newx) { x = newx; }
//	void sety(int newy) { y = newy; }
//	void setradius(int newradius) {
//		radius = newradius;
//	}
//	int getradius() {
//		return radius;
//	}
//	void vivodinformacii() {
//		GeomFigure::vivodinformacii();
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
//class Triangle : public GeomFigure {
//	int a, b, c;
//public:
//	void setx(int newx) {x = newx;}	
//	void sety(int newy) {y = newy;}
//	void seta(int newa) { a = newa; }
//	void setb(int newb) { b = newb; }
//	void setc(int newc) { c = newc; }
//	int geta() { return a; }
//	int getb() { return b; }
//	int getc() { return c; }
//	void vivodinformacii() {
//		GeomFigure::vivodinformacii();
//		cout << getid() << a << b << c << endl;
//	}
//	int ploshadtriangle() {
//		int poluperimetr = (a+b+c)/2;
//		return sqrt(poluperimetr * ((poluperimetr - a) * (poluperimetr - b) * (poluperimetr - c)));
//	}
//	int perimetrtriangle() {
//		return a + b + c;
//	}
//	Triangle() :a(3),b(4),c(5), GeomFigure() {
//
//	}
//	Triangle(int newa, int newb, int newc, int newx, int newy) : GeomFigure(newx,newy) {
//		if (newa >= (newb + newc) || newb >= (newa + newc) || newc >= (newb + newa)) {
//			a = 3; b = 4; c = 5;
//		}
//		else
//			a = newa; b = newb; c = newc;
//	}
//	~Triangle() {
//		cout << "Triangle " << getid() << " is deleted" << endl;
//	}
//};
//void main() {
//	Rectangle *p_rect = new Rectangle;
//	p_rect->setx(-1);
//	p_rect->sety(5);
//	cout << p_rect->ploshad() << endl;
//	cout << p_rect->perimetr() << endl;
//	p_rect->vivodinformacii();
//	delete p_rect;
//	Circle Circ(2, 9, 0);
//	Circ.setx(-1);
//	Circ.sety(-1);
//	cout << "Ploshad " << Circ.ploshadkruga() << endl;
//	cout << "Dlina " << Circ.dlinaokruzhnostri() << endl;
//	Circ.vivodinformacii();
//	Triangle Tri(6, 9, 5, -2, 1);
//	Tri.setx(0);
//	Tri.sety(0);
//	cout << "Ploshad " <<  Tri.ploshadtriangle() << endl;
//	cout << "Ploshad " << Tri.perimetrtriangle() << endl;
//	Tri.vivodinformacii();
//}