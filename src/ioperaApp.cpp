#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "SimpleGUI.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class ioperaApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void ioperaApp::setup()
{
}

void ioperaApp::mouseDown( MouseEvent event )
{
}

void ioperaApp::update()
{
}

void ioperaApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}


CINDER_APP_BASIC( ioperaApp, RendererGl )
