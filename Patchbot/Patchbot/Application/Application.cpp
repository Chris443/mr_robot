#include <iostream>

#include <QtWidgets/QApplication>

#include "../Resources/MapLoader.h"
#include "../Resources/TGA_Image.h"

#include "../gui/Patchbot.h"
#include <qpushbutton.h>


struct vector {
	vector(float x, float y)
		:x(x), y(y) {};
	float x, y;
};

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);

	Patchbot a;

	a.show();

	return app.exec();
}

	//actual map

	//maploader.loadMap("res//maps/everything.txt");


	//some broken maps to error-test
	//maploader.loadMap("res//broken_chars.txt");  -works
	//maploader.loadMap("res//broken_header_a.txt"); -works
	//maploader.loadMap("res//broken_header_b.txt"); -works, error_type not header_type (is ok)
	//maploader.loadMap("res//broken_header_c.txt"); -works
	//maploader.loadMap("res//broken_header_d.txt"); - works
	//maploader.loadMap("res//broken_header_e.txt"); - works
	//maploader.loadMap("res//broken_nogoal.txt"); - works
	//maploader.loadMap("res//broken_nostart.txt"); - works
	//maploader.loadMap("res//broken_tab.txt"); -works
	//maploader.loadMap("res//broken_too_few_chars.txt"); -works
	//maploader.loadMap("res//broken_too_few_lines.txt"); - works
	//maploader.loadMap("res//broken_too_many_chars.txt"); -works
	//maploader.loadMap("res//broken_too_many_lines.txt"); -works
	//maploader.loadMap("res//broken_two_starts.txt"); -works
