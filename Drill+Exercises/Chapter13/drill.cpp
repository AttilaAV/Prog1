#include "Simple_window.h"
#include "Graph.h"


int main()
{

	//1
	Point p(100,100); // to become top left corner of window
	Simple_window win(p,800,1000,"Chapter 13 Drill"); // make a simple window

	//2
	constexpr int grid_size = 100;
	constexpr int grid_max = 800;

	Lines grid;
	for (int x = grid_size; x <= grid_max; x += grid_size)
	{
		grid.add(Point{x,0}, Point{x, grid_max});
		grid.add(Point(0,x), Point{grid_max, x});
	}

	win.attach(grid);

	//3


	//3
    Vector_ref<Graph_lib::Rectangle> vr;
	for (int i = 0; i<8; ++i) {
        vr.push_back(new Graph_lib::Rectangle(Point(i*grid_size,i*grid_size),grid_size+1,grid_size+1));
        vr[vr.size()-1].set_fill_color(Color::red);
        win.attach(vr[vr.size()-1]);
    }

    //4
    Image badge1(Point(200,0),"badge.jpg");
    badge1.set_mask(Point(200,0),200,200);
    win.attach(badge1);
    Image badge2(Point(500,200),"badge.jpg");
    badge2.set_mask(Point(200,0),200,200);
    win.attach(badge2);
    Image badge3(Point(100,500),"badge.jpg");
    badge3.set_mask(Point(200,0),200,200);
    win.attach(badge3);

    //5

	Image btc(Point(0,0),"btc.jpg");
	win.attach(btc);
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j<8; ++j)
		{
			win.wait_for_button();
			if (i == 7 and j == 7) break; //this prevents the img to move outside of the grid
			if(j<7) btc.move(100,0);
			else btc.move(-700,100);
		}
	}
	
	win.wait_for_button();

	return 0;
}

