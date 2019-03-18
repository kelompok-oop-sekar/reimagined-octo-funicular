#ifndef RENDERABLE_H
#define RENDERABLE_H

class Renderable {
protected:
	static char** Map;

public:
	virtual char Render() = 0;
};

#endif