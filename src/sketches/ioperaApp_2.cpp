#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "SimpleGUI.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class ioperaApp_2 : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void ioperaApp_2::setup()
{
}

void ioperaApp_2::mouseDown( MouseEvent event )
{
}

void ioperaApp_2::update()
{
}

void ioperaApp_2::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}


CINDER_APP_BASIC( ioperaApp_2, RendererGl )
