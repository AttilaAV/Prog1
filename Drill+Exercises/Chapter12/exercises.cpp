#include "Simple_window.h"
#include "Graph.h"


int main()
{

	Point p(100,100); // to become top left corner of window
	Simple_window win(p,1400,800,"My window"); // make a simple window

//EX1
	Rectangle r(Point(50,50),100,50);
    r.set_color(Color::blue);
    win.attach(r);

    Polygon poly;
    poly.add(Point(50,150));
    poly.add(Point(150,150));
    poly.add(Point(150,200));
    poly.add(Point(50,200));
    poly.set_color(Color::red);
    win.attach(poly);

//EX2

    Rectangle r2(Point(50,110),100,30);
    win.attach(r2);

    Text t(Point(75,130),"Howdy!");
    win.attach(t);


//EX3

    Closed_polyline A;
    A.add(Point(230,250));
    A.add(Point(260,100));
    A.add(Point(290,250));

    A.set_color(Color::blue);
    A.set_style(Line_style(Line_style::solid,4));
    win.attach(A);

    Open_polyline V;
    V.add(Point(190,100));
    V.add(Point(215,250));
    V.add(Point(250,100));
    V.set_color(Color::red);
    V.set_style(Line_style(Line_style::solid,4));
    win.attach(V);

//EX4
    Rectangle rect1(Point(100,400),100,100);
    rect1.set_fill_color(Color::white);
    win.attach(rect1);

    Rectangle rect2(Point(200,400),100,100);
    rect2.set_fill_color(Color::red);
    win.attach(rect2);

    Rectangle rect3(Point(300,400),100,100);
    rect3.set_fill_color(Color::white);
    win.attach(rect3);

    Rectangle rect4(Point(100,500),100,100);
    rect4.set_fill_color(Color::red);
    win.attach(rect4);

    Rectangle rect5(Point(200,500),100,100);
    rect5.set_fill_color(Color::white);
    win.attach(rect5);

    Rectangle rect6(Point(300,500),100,100);
    rect6.set_fill_color(Color::red);
    win.attach(rect6);

    Rectangle rect7(Point(100,600),100,100);
    rect7.set_fill_color(Color::white);
    win.attach(rect7);

    Rectangle rect8(Point(200,600),100,100);
    rect8.set_fill_color(Color::red);
    win.attach(rect8);

    Rectangle rect9(Point(300,600),100,100);
    rect9.set_fill_color(Color::white);
    win.attach(rect9);

//EX5
    Rectangle rect(Point(217,63),1067,675);
    rect.set_color(Color::red);
    rect.set_style(Line_style(Line_style::solid,15));
    win.attach(rect);

//EX6
    Rectangle rr(Point(100,100),2000,1000);
    win.attach(rr);

//EX7
    Line_style house_style(Line_style::solid,4);

    Rectangle base(Point(500,300),440,220);
    base.set_style(house_style);
    base.set_fill_color(Color::yellow);
    win.attach(base);

    Rectangle door(Point(690,420),50,100);
    door.set_style(house_style);
    door.set_fill_color(Color::dark_green);
    win.attach(door);

    Rectangle win1(Point(570,360),50,50);
    win1.set_style(house_style);
    win1.set_fill_color(Color::cyan);
    win.attach(win1);

    Rectangle win2(Point(800,360),50,50);
    win2.set_style(house_style);
    win2.set_fill_color(Color::cyan);
    win.attach(win2);

	Rectangle chimney2(Point(800,180),25,50);
    chimney2.set_style(house_style);
    chimney2.set_fill_color(Color::dark_green);
    win.attach(chimney2);

	Polygon roof;
    roof.add(Point(500,300));
    roof.add(Point(720,150));
    roof.add(Point(940,300));
    roof.set_style(house_style);
    roof.set_fill_color(Color::dark_blue);
    win.attach(roof);

//EX8
    Line_style oly_style(Line_style(Line_style::solid,10));

    Circle c1(Point(300,300),50);
    c1.set_style(oly_style);
    c1.set_color(Color::blue);
    win.attach(c1);

    Circle c2(Point(420,300),50);
    c2.set_style(oly_style);
    win.attach(c2);

    Circle c3(Point(540,300),50);
    c3.set_style(oly_style);
    c3.set_color(Color::red);
    win.attach(c3);

    Circle c4(Point(360,350),50);
    c4.set_style(oly_style);
    c4.set_color(Color::yellow);
    win.attach(c4);

    Circle c5(Point(480,350),50);
    c5.set_style(oly_style);
    c5.set_color(Color::green);
    win.attach(c5);

//EX9

    Image img(Point(900,400),"badge.jpg");
    win.attach(img);
    win.set_label("PROG1");

    Text txt(Point(950,450),"PROG1");
    win.attach(txt);

    win.wait_for_button();


	win.wait_for_button();

}