#ifndef __MyProject1MyDialog1__
#define __MyProject1MyDialog1__

/**
@file
Subclass of MyDialog1, which is generated by wxFormBuilder.
*/

#include "search.h"

/** Implementing MyDialog1 */
class MyProject1MyDialog1 : public MyDialog1
{
protected:
	// Handlers for MyDialog1 events.
	void Event_OnClose( wxCloseEvent& event );
	
public:
	/** Constructor */
	MyProject1MyDialog1( wxWindow* parent );
};

#endif // __MyProject1MyDialog1__